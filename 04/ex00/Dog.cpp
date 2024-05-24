
#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    _name = "";
}

Dog::Dog(std::string name) : Animal("Dog") {
    _name = name;
}

Dog::Dog(const Dog& other) {
    this->operator=(other);
}

Dog& Dog::operator=(const Dog& other) {
    this->_name = other._name;
    return *this;
}

Dog::~Dog() {
}
