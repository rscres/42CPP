#include "ScalarConverter.hpp"
#include <iostream>

int main(int argc, char *argv[]) {
	if (argc == 2) {
	    ScalarConverter::convert(std::string(argv[1]));
	} else {
	    std::cout << "Usage:./convert <literal>" << std::endl;
	}
	return 0;
}