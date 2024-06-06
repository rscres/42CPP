
#include "Span.hpp"
#include <iostream>
#include <algorithm>
#include <climits>

Span::Span() : _size(0) {}

Span::Span(unsigned int N) : _size(N) {}

Span::Span(const Span& other) : _size(other._size) {
    _vector = other._vector;
}

Span& Span::operator=(const Span& other) {
    if (this != &other) {
        _size = other._size;
        _vector = other._vector;
    }
    return *this;
}

Span::~Span() {}

const char* Span::SpanFullException::what() const throw() {
    return "Span is full";
}

const char* Span::NotEnoughElementsException::what() const throw() {
    return "Not enough elements to calculate span";
}

std::vector<int> Span::getVector() const {
    return _vector;
}

unsigned int Span::getSize() const {
    return _size;
}

void Span::addNumber(int num) {
    try {
        if (_vector.size() < _size)
            _vector.push_back(num);
        else
            throw SpanFullException();
    } catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}

int Span::shortestSpan() const {
    if (_vector.size() < 2)
        throw NotEnoughElementsException();
    std::vector<int> sorted = _vector;
    std::sort(sorted.begin(), sorted.end());
    int span = INT_MAX;
    for (unsigned int i = 0; i < sorted.size() - 1; i++) { //change to iterator
        if (sorted[i + 1] - sorted[i] < span)
            span = sorted[i + 1] - sorted[i];
    }
    return span;
}

int Span::longestSpan() const {
    if (_vector.size() < 2)
        throw NotEnoughElementsException();
    int max = *std::max_element(_vector.begin(), _vector.end());
    int min = *std::min_element(_vector.begin(), _vector.end());
    return max - min;
}

void Span::fillSpan(iterator begin, iterator end) { //is not adding any elements
    try {
        if (std::distance(begin, end) > _size) {
            throw std::out_of_range("Size is too big");
        }
        while (begin != end) {
            addNumber(*begin++);
        }
    } catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}

void Span::fillSpan(unsigned int size) {
    try {
        if (size > _size) {
            throw std::out_of_range("Size is too big");
        }
        srand(time(0));

        int max = size * 10;
        for (unsigned int i = 0; i < size; i++) {
            addNumber(rand() % max);
        }
    } catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}