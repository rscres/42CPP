
#include "RPN.hpp"
#include <iostream>
#include <algorithm>

RPN::RPN() {}

RPN::RPN(const RPN& other) {
    _numbers = other._numbers;
    _operators = other._operators;
}

RPN& RPN::operator=(const RPN& other) {
    if (this != &other) {
        _numbers = other._numbers;
        _operators = other._operators;
    }
    return *this;
}

RPN::~RPN() {}

void RPN::pushNumber(int number) {
    _numbers.push(number);
}

void RPN::pushOperator(char op) {
    _operators.push(op);
}

void RPN::calculate() {
    if (_numbers.size() < 2 || _operators.size() == 0) {
        std::cerr << "Not enough numbers or operators" << std::endl;
        return;
    }
    int b = _numbers.top();
    _numbers.pop();
    int a = _numbers.top();
    _numbers.pop();
    char op = _operators.top();
    _operators.pop();
    if (op == '+') {
        _numbers.push(a + b);
    } else if (op == '-') {
        _numbers.push(a - b);
    } else if (op == '*') {
        _numbers.push(a * b);
    } else if (op == '/') {
        _numbers.push(a / b);
    }
}

void RPN::getInput(std::string input) {
    do {
        while (input[0] == ' ') {
            input.erase(0, 1);
        }
        if (_numbers.size() >= 2 && _operators.size() > 0) {
            calculate();
        } else {
            if (isdigit(input[0])) {
                std::string number = input.substr(0, input.find_first_of("+-*/ "));
                pushNumber(std::atoi(number.c_str()));
                input.erase(0, number.size());
            } else {
                pushOperator(input[0]);
                input.erase(0, 1);
            }
        }
    } while (input.size() > 0);
    if (_numbers.size() >= 2 && _operators.size() > 0) {
        calculate();
        std::cout << _numbers.top() << std::endl;
    } else
        std::cerr << "Error" << std::endl;
}

bool RPN::validateInput(std::string input) {
    if (input.find_first_not_of("0123456789+-*/ ") != std::string::npos) {
        return false;
    }
    return true;
}