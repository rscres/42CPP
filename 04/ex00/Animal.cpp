
#include "Animal.hpp"
#include <iostream>

Animal::Animal() {
    std::cout << BLUE "Animal default constructor" RESET << std::endl;
    _type = "Animal";
}

Animal::Animal(std::string type) {
    std::cout << BLUE "Animal constructor" RESET << std::endl;
	_type = type;
}

Animal::Animal(const Animal& other) {
    std::cout << BLUE "Animal copy constructor" RESET << std::endl;
    this->operator=(other);
}

Animal& Animal::operator=(const Animal& other) {
    _type = other._type;
    return *this;
}

Animal::~Animal() {
    std::cout << BLUE "Animal destructor" RESET << std::endl;
}

void Animal::makeSound() const {
    std::cout << BLUE "Animal sound" RESET << std::endl;
}

std::string Animal::getType() const {
    return _type;
}