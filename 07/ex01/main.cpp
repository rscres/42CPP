#include "iter.hpp"
#include <iostream>

char toUpper(char element) {
    return (std::toupper(element));
}

int times(int element) {
    return (element * element);
}

int sum(int element) {
    return (element + element);
}

int main() {


	{
		std::cout << "---------INT---------" << std::endl;
		int array[] = {1, 2, 3, 4, 5};

		std::cout << "Int array before:\t";
		for (int i = 0; i < 5; i++) {
			std::cout << array[i] << " ";
		}
		std::cout << std::endl;

		iter(array, 5, sum);

		std::cout << "Int array after:\t";
		for (int i = 0; i < 5; i++) {
			std::cout << array[i] << " ";
		}
		std::cout << std::endl;
	}
	{
        std::cout << "---------STRING---------" << std::endl;
        char *ptr;
        unsigned int size = 11;

        std::string henlo = "Hello world!";
        ptr = (char *)henlo.c_str();

        std::cout << "Original string:\t" << ptr << std::endl;

        iter(ptr, size, toUpper);

        std::cout << "String after iter:\t" << ptr << std::endl;
    }
    {
        std::cout << "----------INT-------------" << std::endl;
        unsigned int size = 10;
        int *array = new int[size];

        for (int i = 0; (unsigned int)i < size; i++)
            array[i] = i + 1;

        std::cout << "Int array before:\t";
        for (unsigned int i = 0; i < size; i++)
            std::cout << array[i] << " ";
        std::cout << std::endl;

        iter(array, size, times);

        std::cout << "Int array after:\t";
        for (unsigned int i = 0; i < size; i++)
            std::cout << array[i] << " ";
        std::cout << std::endl;

        delete[] array;
    }
  	return 0;
}