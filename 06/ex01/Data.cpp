
#include "Data.hpp"
#include <string>

Data::Data() : info("hello world") {}

Data::Data(const Data& other) : info(other.info) {}

Data& Data::operator=(const Data& other) {
    if (this != &other) {
        const_cast<std::string&>(info) = other.info;
    }
    return *this;
}

Data::~Data() {}

std::string Data::getInfo() const {
    return info;
}
