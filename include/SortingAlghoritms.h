#ifndef SORTING_ALGHORITMS_H
#define SORTING_ALGHORITMS_H
#include "Array.h"
#include <cstddef>
class SortingAlghoritms{
    struct Data {
        size_t size {};
        int * temp{};
    };
    Data data;
private:
    void mergeSorting(int *arr, int *temp, size_t left, size_t right);
    void merge(int *arr, int *temp, size_t left, size_t mid, size_t right);

    void reverseMergeSorting(int *arr, int *temp, size_t left, size_t right);
    void reverseMerge(int *arr, int *temp, size_t left, size_t mid, size_t right);
public:
    //sorting alghoritms
    bool bubbleSort(Array &arr);
    
    bool reverseBubbleSort(Array &arr);
    
    bool mergeSort(Array &arr);
    
    bool reverseMergeSort(Array &arr);

    bool selectionSort(Array &arr);
};

#endif 