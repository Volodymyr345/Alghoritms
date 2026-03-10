#include "Array.h"
Array::Array() : 
    arr{nullptr}, size{0} {

}

int *Array::get_arr(){
    return arr;
}

//this method increases size of an array and push the element to the end of an array
bool Array::push_back(int num) { 
    if(size >= 1) {
        int *temp_arr {arr}; // giving the address of an arr to temp_arr
        
        arr = new int[size + 1];//new size
        for (size_t i{} ; i < size; i++)
            *(arr + i) = *(temp_arr + i); // entereing an old element
        size++;
        delete [] temp_arr;
    }else { // if size if 0
        arr = new int[++size];
    }
    arr[size - 1] = num; // pushing back a new element
    
    return true;
}

size_t Array::get_size() {
    return size;
}

bool Array::remove(size_t index) {
    if(index >= size) return false; //if size is less than index then false
    if(size > 1) {
        int *temp_arr {arr};
        arr = new int[size - 1]; // allocating a new size of an array
        for(size_t i {0}, j{0}; i < size; i++) {
            if (i == index)
                continue;
            *(arr + j++) = *(temp_arr + i); //copying values
        }
        delete [] temp_arr; // deleting an old array
        size--;
        return true;
    }

    delete [] arr;
    arr = nullptr;
    size--;
    return true;
}

std::ostream &operator<<(std::ostream &os, Array& array) {
    if(array.arr != nullptr) {
        for(size_t i{}; i < array.size; i++) {
            os << *(array.arr + i) << " ";
        }
        os << std::endl;
    }else {
        os << "No elements" << std::endl;
    }
    return os;
}

int& Array::operator[](size_t num) {
    if(size <= num) {
        std::cerr << "Index out of bounds" << std::endl;
        throw;
    }
    return arr[num];
}

Array::~Array() {
    delete [] arr;
}

