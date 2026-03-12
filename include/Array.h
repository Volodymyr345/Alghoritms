#ifndef ARRAY_H
#define ARRAY_H
#include <cstddef>
#include <iostream>
#include "PrintableArr.h"
class Array : 
    public PrintableArr {
private:
    int *arr;
    size_t size;
public:
    Array();
    size_t get_size();
    bool push_back(int num);
    int *get_arr();
    bool remove(size_t index);

    void print(std::ostream &os) const override;

    int& operator[](size_t num);

    ~Array();
    


};

#endif