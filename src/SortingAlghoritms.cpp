#include "SortingAlghoritms.h"



bool SortingAlghoritms::bubbleSort(Array &arr){
    data.size = arr.get_size();
    if(data.size <= 1) return false;
    for(size_t k {0}; k < data.size; k++){
        for(size_t i {0}, j{1} ; j < data.size - k; i++, j++){
            int temp_val = arr[i];
            if(temp_val > arr[j]){
                arr[i] = arr[j];
                arr[j] = temp_val; 
            }
        }
    }
    data.size = 0;
    return true;
}

bool SortingAlghoritms::reverseBubbleSort(Array &arr) {
    data.size = arr.get_size();
    if(data.size <= 1) return false;

    for(size_t i {}; i < data.size; i++){
        for(size_t k {data.size - 1}, j{k - 1}; (0 + i) < j + 1; k--, j--) {
            int temp_val = arr[k];
            if(arr[j] < arr[k]) {
                arr[k] = arr[j];
                arr[j] = temp_val;
            }
        }
    }
    data.size = 0;
    return true;   
}








bool SortingAlghoritms::mergeSort(Array &arr){
    data.size = arr.get_size();
    if(data.size <= 1) return false;
    data.temp = new int[data.size];
    
    mergeSorting(arr.get_arr(), data.temp,  0, data.size - 1);
    
    delete [] data.temp; 
    return true;
}

void SortingAlghoritms::mergeSorting(int *arr, int *temp, size_t left, size_t right) {
    if(left >= right) return;
    int mid = (left + right) / 2;
    
    mergeSorting(arr, temp, left, mid);
    mergeSorting(arr, temp, mid + 1, right);
    merge(arr, temp, left, mid, right);
}

void SortingAlghoritms::merge(int *arr, int *temp, size_t left, size_t mid, size_t right) {
    size_t i = left;
    size_t j = mid + 1;
    size_t k = left;
    while(i <= mid && j <= right)
        if(arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];

    while(i <= mid)
        temp[k++] = arr[i++];

    while(j <= right)
        temp[k++] = arr[j++];

    for(size_t x = left; x <= right; x++)
        arr[x] = temp[x];
}


bool SortingAlghoritms::reverseMergeSort(Array &arr) {
    data.size = arr.get_size();
    data.temp = new int[data.size];
    if(data.size <= 1) return false;

    reverseMergeSorting(arr.get_arr(), data.temp, 0, data.size - 1);
    delete [] data.temp;
    return true;
}

void SortingAlghoritms::reverseMergeSorting(int *arr, int *temp, size_t left, size_t right) {
   int mid = (left + right) / 2;
   if(left >= right) return;
   reverseMergeSorting(arr, temp, left, mid);
   reverseMergeSorting(arr, temp, mid + 1, right);
   reverseMerge(arr, temp, left, mid, right);
}

void SortingAlghoritms::reverseMerge(int *arr, int *temp, size_t left, size_t mid, size_t right) {
    size_t i, k;
    i = k = left;
    size_t j = mid + 1;
    while(i <= mid && j <= right) {
        if(arr[i] >= arr[j]) 
            temp[k++] = arr[i++];
        else 
            temp[k++] = arr[j++];
    }

    while(i <= mid)
        temp[k++] = arr[i++];
    while(j <= right)
        temp[k++] = arr[j++];
    
    for(size_t x{}; x <= right; x++)
        arr[x] = temp[x];
}


bool SortingAlghoritms::selectionSort(Array &arr) {
    data.temp = arr.get_arr();
    data.size = arr.get_size();
    if(data.size <= 1) return false; // if size is less or equal to 1 then false
    for(size_t i{}; i < data.size - 1; i++) {
        int *min_elem = &data.temp[i]; // giving an address to the pointer
        for(size_t k{i + 1}; k < data.size; k++)
            if(data.temp[k] < *min_elem)
                min_elem = &data.temp[k];
        if(*min_elem != data.temp[i]){
            int temp_element = data.temp[i];
            data.temp[i] = *min_elem;
            *min_elem = temp_element;
        }
    }
    return true;
}












