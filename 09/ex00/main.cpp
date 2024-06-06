#include "BitcoinExchange.hpp"
#include <iostream>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "usage: ./bitcoin [input file]" << std::endl;
        return 1;
    }
    BitcoinExchange exchange;
    try {
        exchange.initDatabase();
        exchange.readInputFile(argv[1]);
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }
}