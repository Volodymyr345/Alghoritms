#include <iostream>
#include "Array.h"
#include "SortingAlghoritms.h"

int main(){
    Array arr = Array();
    SortingAlghoritms srt;
    arr.push_back(3);
    
    arr.push_back(5);
    arr.push_back(9);
    arr.push_back(1);
    arr.push_back(6);
    arr.push_back(1);
    arr.push_back(2);
    std::cout << arr;

    // srt.bubbleSort(arr);
    // std::cout << arr;

    // srt.mergeSort(arr);
    // std::cout << "Merge sort: " << arr;



    // srt.reverseMergeSort(arr);
    // srt.selectionSort(arr);
    srt.insertionSort(arr);
    std::cout << "Insert sort: "<< arr << std::endl;


}