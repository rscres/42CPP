#include <iostream>
#include <cstdlib>
#include "Array.hpp"

#define MAX_VAL 750

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
	{
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

	{
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		//SCOPE
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}
    	delete [] mirror;//
	}
	return 0;

}