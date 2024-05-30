
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

union uconv {
    char c;
    int i;
    float f;
    double d;
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

void printInfNan(std::string input);
void printValues(int type, std::string input);


#endif //SCALARCONVERTER_HPP