#include "RPN.hpp"
#include <iostream>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: ./rpn \"<expression>\"" << std::endl;
        return 1;
    }
    RPN rpn;
    if (!rpn.validateInput(argv[1])) {
        std::cerr << "Error" << std::endl;
        return 1;
    }
    rpn.getInput(argv[1]);
    return 0;
}