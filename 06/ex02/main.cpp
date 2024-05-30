#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstddef>
#include <unistd.h> //for sleep()

Base * generate(void) {
    Base *newBase;

    std::srand(std::time(0));
    int n = std::rand();

    if (n % 3 == 2) {
        std::cout << "Created class A" << std::endl;
        newBase = new A;
    } else if (n % 3 == 1) {
        std::cout << "Created class B" << std::endl;
        newBase = new B;
    } else {
        std::cout << "Created class C" << std::endl;
        newBase = new C;
    }
    return newBase;
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p) != nullptr)
        std::cout << "Instance is of class A" << std::endl;
    else if (dynamic_cast<B*>(p) != nullptr)
        std::cout << "Instance is of class B" << std::endl;
    else if (dynamic_cast<C*>(p) != nullptr)
        std::cout << "Instance is of class C" << std::endl;
}

void identify(Base& p) {
    if (dynamic_cast<A*>(&p) != nullptr)
        std::cout << "Instance is of class A" << std::endl;
    else if (dynamic_cast<B*>(&p) != nullptr)
        std::cout << "Instance is of class B" << std::endl;
    else if (dynamic_cast<C*>(&p) != nullptr)
        std::cout << "Instance is of class C" << std::endl;
}

int main() {
    Base *ptr = generate();
    identify(ptr);
    identify(*ptr);

    sleep(1);
    Base *ptr2 = generate();
    identify(ptr2);
    identify(*ptr2);

    sleep(1);
    Base *ptr3 = generate();
    identify(ptr3);
    identify(*ptr3);

    delete ptr;
    delete ptr2;
    delete ptr3;
    return 0;
}
