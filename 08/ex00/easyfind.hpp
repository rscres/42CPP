#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template<typename T>
bool easyfind(T& container, int n) {
    typename T::iterator it = std::find(container.begin(), container.end(), n);
	if (it == container.end()) {
		std::cerr << "Error: number not found" << std::endl;
		return false;
	}
	std::cout << "Found " << *it << std::endl;
	return true;
}

#endif //EASYFIND_HPP