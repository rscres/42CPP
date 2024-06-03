#include "MutantStack.hpp"
#include <iostream>
#include <algorithm>
#include <list>

int main() {
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "Front: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "Size: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    std::cout << "--------------------------------" << std::endl;

    std::list<int> l1;
    l1.push_back(5);
    l1.push_back(17);
    std::cout << "Front: " << l1.back() << std::endl;
    l1.pop_back();
    std::cout << "Size: " << l1.size() << std::endl;
    l1.push_back(3);
    l1.push_back(5);
    l1.push_back(737);
    l1.push_back(0);
    std::list<int>::iterator l_it = l1.begin();
    std::list<int>::iterator l_ite = l1.end();
    ++l_it;
    --l_it;
    while (l_it != l_ite)
    {
        std::cout << *l_it << std::endl;
        ++l_it;
    }

    return 0;
}