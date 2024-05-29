#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

void printChar(std::string input) {
    char c = input[0];
    if (!isprint(c)) {
        std::cout << "char: Non displayable" << std::endl;
    } else {
        std::cout << "char: '" << c << "'" << std::endl;
    }
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void printInt(std::string input) {
    int i = atoi(input.c_str());
    if (!isprint(static_cast<char>(i))) {
        std::cout << "char: Non displayable" << std::endl;
    } else {
        std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
    }
    std::cout << "int: " << i << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(i) << std::endl;
}

void printFloat(std::string input) {
    float f = atof(input.c_str());
    if (!isprint(static_cast<char>(f))) {
        std::cout << "char: Non displayable" << std::endl;
    } else {
        std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
    }
    std::cout << "int: " << static_cast<int>(f) << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << f << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void printDouble(std::string input) {
    double d = atof(input.c_str());
    if (!isprint(static_cast<char>(d))) {
        std::cout << "char: Non displayable" << std::endl;
    } else {
        std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
    }
    std::cout << "int: " << static_cast<int>(d) << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
    std::cout << "double: " << d << std::endl;
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