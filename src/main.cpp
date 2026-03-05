#include <iostream>
#include "Array.h"


int main(){
    Array arr = Array();
    
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(3);
    std::cout << arr;

    arr.remove(0);
    std::cout << arr;
    arr.remove(0);
    std::cout << arr;
    arr.remove(0);
    std::cout << arr;
}