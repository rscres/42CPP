#include "Serializer.hpp"
#include <iostream>

int main(void) {
    Data *data = new Data();

    std::cout << "data address: " << data << std::endl;
    uintptr_t ptr = Serializer::serialize(data);
    std::cout << "serialized: " << ptr << std::endl;
	Data *data2 = Serializer::deserialize(ptr);
    std::cout << "data2 deserialized: " << data2 << std::endl;
	std::cout << "data address: " << data << std::endl;
    
    delete data;
}