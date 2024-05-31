#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

template<typename T>
int easyfind(T& container, int n) {
    typename T::iterator i;
    for (i = container.begin(); i != container.end(); i++) {
        if (*i == n) {
            std::cout << "Found " << n << std::endl;
            return 0;
        }
    }
    std::cerr << "Error: number not found" << std::endl;
    return 1;
}

#endif //EASYFIND_HPP