#include "iter.hpp"
#include <iostream>

void printInt(int i) {
    std::cout << i << std::endl;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    ::iter(arr, 5, &printInt);
    
    std::string arr2[3] = {"hello", "there", "mate"};
    ::iter(arr2, 3, ::printArr<std::string>);
}