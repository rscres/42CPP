#include "Pmergeme.hpp"
#include <iostream>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: ./pmergeme \"[...unsorted numbers]\"" << std::endl;
        return 1;
    }
    Pmergeme pmergeme(argv[1]);
    pmergeme.sortContainers();
    return 0;
}