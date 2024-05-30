#include "Array.hpp"
#include <iostream>

int main() {
    {
        Array<int> a(2);
        Array<int> b;

        try {
            a[2] = 42;
        } catch (std::exception& e) {
            std::cout << e.what() << std::endl;
        }

        try {
            b[0] = 42;
        } catch (std::exception& e) {
            std::cout << e.what() << std::endl;
        }
	}

    Array<int> intArray(10);
    Array<double> doubleArray(10);
    Array<std::string> stringArray(10);

    for (int i = 0; i < 10; i++)
        intArray[i] = i + i;
    
    try {
        std::cout << intArray[10] << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        std::cout << intArray[-1] << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    for (int i = 0; i < 10; i++) {
        std::cout << intArray[i] << std::endl;
    }

    for (int i = 0; i < 10; i++)
        doubleArray[i] = i / 2.0;

    for (int i = 0; i < 10; i++) {
        std::cout << doubleArray[i] << std::endl;
    }

}