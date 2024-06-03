#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <deque>
#include <list>

int main(void) {

    std::cout << "--------VECTOR--------" << std::endl;
    std::vector<int> v1;
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(7);
    v1.push_back(8);
    v1.push_back(9);
    ::easyfind(v1, 5);
    ::easyfind(v1, 11);

    std::cout << "---------DEQUE--------" << std::endl;
    std::deque<int> d1;
    d1.push_back(10);
    d1.push_back(13);
    d1.push_back(17);
    d1.push_back(21);
    d1.push_back(30);
    d1.push_back(42);
    ::easyfind(d1, 11);
    ::easyfind(d1, 17);

    std::cout << "----------LIST---------" << std::endl;
    std::list<int> l1;
    l1.push_back(-1);
    l1.push_back(0);
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);
    l1.push_back(5);
    ::easyfind(l1, 1);
    ::easyfind(l1, 11);
  
    return 0;
}