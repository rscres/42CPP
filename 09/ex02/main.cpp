#include "Pmergeme.hpp"
#include <iostream>

int main(int argc, char *argv[]) {
    if (argc <= 2) {
        std::cerr << "Usage: ./pmergeme [...unsorted numbers]" << std::endl;
        return 1;
    }
    std::vector<std::string> args(argv + 1, argv + argc);
    try {
        Pmergeme a(args);
        a.fordJohnson();
    } catch (const Pmergeme::InvalidArgumentsException& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}

