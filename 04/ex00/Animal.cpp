
#include "Animal.hpp"

Animal::Animal() {
    _type = "";
}

Animal::Animal(std::string type) {
	_type = type;
}

Animal::Animal(const Animal& other) {
    this->operator=(other);
}

Animal& Animal::operator=(const Animal& other) {
    _type = other._type;
    return *this;
}

Animal::~Animal() {
}
