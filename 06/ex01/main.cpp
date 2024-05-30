#include "Serializer.hpp"
#include <iostream>
#include <cstdint>


int main(void) {
    Data *data = new Data();

    std::cout << "data address: " << data << std::endl;
    uintptr_t ptr = Serializer::serialize(data);
    std::cout << "serialized: " << ptr << std::endl;
    std::cout << "deserialized: " << Serializer::deserialize(ptr) << std::endl;
    
    delete data;
}