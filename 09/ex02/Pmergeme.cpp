
#include "Pmergeme.hpp"
#include <string>
#include <iostream>
#include <algorithm>
#include <ctime>

//CONSTRUCTORS

Pmergeme::Pmergeme() {}

Pmergeme::Pmergeme(std::vector<std::string> input) {
    _input = input;
    if (initContainers(input) == 1) {
        throw InvalidArgumentsException();
    }
    leftover = false;
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

//DESTRUCTORS

Pmergeme::~Pmergeme() {}

//PRIVATE FUNCTIONS

bool Pmergeme::verifyInput(std::vector<std::string> input) {
    for (std::vector<std::string>::iterator it = input.begin(); it != input.end(); it++) {
        for (std::string::iterator it2 = it->begin(); it2 != it->end(); it2++) {
            if (!isdigit(*it2))
                return false;
        }
    }
    return true;
}

int Pmergeme::initContainers(std::vector<std::string> input) {
    if (!verifyInput(input)) {
        return 1;
    }
    _vector = populateContainer<std::vector<int> >(input);
    _deque = populateContainer<std::deque<int> >(input);
    return 0;
}

//EXCEPTIONS

const char* Pmergeme::InvalidArgumentsException::what() const throw() {
    return "Invalid arguments";
}

//PUBLIC FUNCTIONS

void Pmergeme::fordJohnson() {
    
    std::cout << "Before: ";
    printContainer(_input);

    std::clock_t start = std::clock();

    getPairs<std::vector<int> >(_vector, _vectorTemp);
    sortPairs<std::vector<std::pair<int, int> > >(_vectorTemp);
    sort<std::vector<int>, std::vector<std::pair<int, int> > >( _vectorSorted, _vectorTemp);

    double duration_vec = (std::clock() - start) / (double)CLOCKS_PER_SEC;
    
    start = std::clock();

    getPairs<std::deque<int> >(_deque, _dequeTemp);
    sortPairs<std::deque<std::pair<int, int> > >(_dequeTemp);
    sort<std::deque<int>, std::deque<std::pair<int, int> > >(_dequeSorted, _dequeTemp);

    double duration_deq = (std::clock() - start) / (double)CLOCKS_PER_SEC;
    
    std::cout << "After: ";
    printContainer(_vectorSorted);

    std::cout << "Time to process a range of " << _input.size() << " with std::vector : " << duration_vec * 1000 << "ms" << std::endl; 
    std::cout << "Time to process a range of " << _input.size() << " with std::deque : " << duration_deq * 1000 << "ms" << std::endl; 
    // std::cout << "Is sorted: " << (is_sorted(_vectorSorted) ? "true" : "false") << std::endl; //verify sorted
}