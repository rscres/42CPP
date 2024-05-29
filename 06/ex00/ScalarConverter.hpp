
#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>

enum etypes {
    CHAR,
    INT,
    FLOAT,
    DOUBLE,
    INFNAN,
    IMPOSSIBLE
};

class ScalarConverter {
    private:
        ScalarConverter(); // Private constructor

    public:
        ScalarConverter(const ScalarConverter& other);
        ScalarConverter& operator=(const ScalarConverter& other);
        ~ScalarConverter();

        static void convert(std::string const& str);
};

void printChar(std::string input);
void printInt(std::string input);
void printFloat(std::string input);
void printDouble(std::string input);
void printInfNan(std::string input);


#endif //SCALARCONVERTER_HPP