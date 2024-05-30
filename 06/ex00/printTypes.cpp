#include "ScalarConverter.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <limits>

void printValues(int type, std::string input) {
	double d;
	if (type == CHAR)
		d = static_cast<double>(input[0]);
	else {
		std::istringstream iss(input);
		iss >> d;
	}
	if (d < std::numeric_limits<char>::min() || d > std::numeric_limits<char>::max())
        std::cout << "char: impossible" << std::endl;
    else if (!isprint(static_cast<char>(d))) {
        std::cout << "char: Non displayable" << std::endl;
    } else {
        std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
    }
    std::cout << "int: " << static_cast<int>(d) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(d) << std::endl;
}

void printInfNan(std::string input) {
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    if (input.compare("inf") == 0 || input.compare("-inf") == 0
        ||input.compare("nan") == 0 || input.compare("-nan") == 0) {
        std::cout << "float: " << input << "f" << std::endl;
        std::cout << "double: " << input << std::endl;
    } else {
        std::cout << "float: " << input << std::endl;
        std::cout << "double: " << input.substr(0, input.size() - 1) << std::endl;
    }
}