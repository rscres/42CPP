#include "RPN.hpp"
#include <iostream>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cout << "Usage: ./rpn \"<expression>\"" << std::endl;
        return 1;
    }
    RPN rpn;
    if (!rpn.validateInput(argv[1])) {
        std::cout << "Error" << std::endl;
        return 1;
    }
	try {
    	rpn.execInput(argv[1]);
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	return 0;
}