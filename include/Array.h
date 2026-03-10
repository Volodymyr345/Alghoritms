#ifndef ARRAY_H
#define ARRAY_H
#include <cstddef>
#include <iostream>
class Array {
    friend std::ostream &operator<<(std::ostream &os, Array& array);
    
private:
    int *arr;
    size_t size;
public:
    Array();
    size_t get_size();
    bool push_back(int num);
    int *get_arr();
    bool remove(size_t index);

    int& operator[](size_t num);

    ~Array();
    


};

#endif