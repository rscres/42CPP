
#include "ScalarConverter.hpp"
#include <iostream>
#include <string>

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& other) {
    (void)other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
    if (this != &other) {
        (void)other;
    }
    return *this;
}

ScalarConverter::~ScalarConverter() {}

int getType(std::string input) {
    if (input.size() == 1 && !isdigit(input[0]))
        return CHAR;
    else if ((input[0] == '+' || input[0] == '-'  || isdigit(input[0]))
        && input.find_first_not_of("0123456789", 1) == std::string::npos)
        return INT;
    else if (input.find('.') != std::string::npos &&
        input.find('.') == input.find_last_of('.')
        && input.at(input.size() - 1) == 'f'
        && input.find_first_not_of("0123456789.") == input.size() - 1)
        return FLOAT;
    else if (input.find('.') != std::string::npos &&
        input.find('.') == input.find_last_of('.')
        && input.find_first_not_of("0123456789.") == std::string::npos)
        return DOUBLE;
    else if (input.compare("nan") == 0 || input.compare("-nan") == 0
		|| input.compare("nanf") == 0 || input.compare("-nanf") == 0
        || input.compare("inff") == 0 || input.compare("-inff") == 0
        || input.compare("inf") == 0 || input.compare("-inf") == 0)
        return INFNAN;
    return IMPOSSIBLE;
}

void ScalarConverter::convert(const std::string& input) {
	int type = getType(input);
    switch (type) {
    case CHAR:
    case INT:
    case FLOAT:
    case DOUBLE:
        printValues(type, input);
        break;
    case INFNAN:
        printInfNan(input);
        break;
    default:
        std::cerr << "Invalid input" << std::endl;
    }
}