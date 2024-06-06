#include "whatever.hpp"
#include <iostream>

int main( void ) {

	std::cout << "----------------INT-------------------" << std::endl;
	{
		int a = 2;
		int b = 3;

		std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	}
	std::cout << "----------------STR-------------------" << std::endl;
	{
		std::string a = "chaine1";
		std::string b = "chaine2";
		
		std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	}
	std::cout << "----------------FLOAT------------------" << std::endl;

    {
        float a = 42.0f;
        float b = -42.0f;

        std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
        ::swap(a, b);
        std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
        std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
        std::cout << std::endl;
    }

    return 0;
}