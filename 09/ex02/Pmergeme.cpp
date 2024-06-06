
#include "Pmergeme.hpp"
#include <string>
#include <iostream>

Pmergeme::Pmergeme() {}

Pmergeme::Pmergeme(std::string input) {
    initContainers(input);
}

Pmergeme::Pmergeme(const Pmergeme& other) {
    std::copy(other._vector.begin(), other._vector.end(), _vector.begin());
    std::copy(other._deque.begin(), other._deque.end(), _deque.begin());
}

Pmergeme& Pmergeme::operator=(const Pmergeme& other) {
    if (this != &other) {
        std::copy(other._vector.begin(), other._vector.end(), _vector.begin());
        std::copy(other._deque.begin(), other._deque.end(), _deque.begin());
    }
    return *this;
}

Pmergeme::~Pmergeme() {

}

bool Pmergeme::verifyInput(std::string input) {
    if (input.find_first_not_of("0123456789 +-") != std::string::npos)
            return false;
    for (std::string::size_type i = 0; i < input.size(); i++) {
        if (input[i] == '-' && ((i != 0 && input[i - 1] != ' ') || !std::isdigit(input[i + 1])))
            return false;
    }
    return true;
}

int Pmergeme::initContainers(std::string input) {
    if (!verifyInput(input)) {
        std::cerr << "Error: Invalid input" << std::endl;
        return 1;
    }
    _vector = populateContainer<std::vector<int> >(input);
    _deque = populateContainer<std::deque<int> >(input);
    for (std::vector<int>::iterator it = _vector.begin(); it != _vector.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
    for (std::deque<int>::iterator it = _deque.begin(); it != _deque.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
    return 0;
}
