#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <array>

int main(void) {

    std::cout << "--------VECTOR--------" << std::endl;
    std::vector<int> v1{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    ::easyfind(v1, 5);
    ::easyfind(v1, 11);

    std::cout << "---------DEQUE--------" << std::endl;
    std::deque<int> d1{10, 13, 17, 21, 30, 42};
    ::easyfind(d1, 11);
    ::easyfind(d1, 17);

    std::cout << "---------ARRAY--------" << std::endl;
    std::array<int, 7> a1{-1, 0, 1, 2, 3, 4, 5};
    ::easyfind(a1, 5);
    ::easyfind(a1, 11);

    std::cout << "----------LIST---------" << std::endl;
    std::list<int> l1{-1, 0, 1, 2, 3, 4, 5};
    ::easyfind(l1, 1);
    ::easyfind(l1, 11);

    std::cout << "------FORWARD-LIST------" << std::endl;
    std::forward_list<int> fl1{-1, 0, 1, 2, 3, 4, 5};
    ::easyfind(fl1, 3);
    ::easyfind(fl1, 11);
    
    return 0;
}