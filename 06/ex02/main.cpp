#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstddef>

Base * generate(void) {
    Base *newBase;
	static bool first = true;

	if (first) {
    	std::srand(std::time(0));
		first = false;
	}

	switch(std::rand() % 3) {
    case 0:
        std::cout << "Created class A" << std::endl;
        newBase = new A;
		break;
    case 1:
        std::cout << "Created class B" << std::endl;
        newBase = new B;
		break;
	case 2:
        std::cout << "Created class C" << std::endl;
        newBase = new C;
		break;
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
	else
		std::cout << "Invalid input" << std::endl;
}

void identify(Base& p) {
    if (dynamic_cast<A*>(&p) != nullptr)
        std::cout << "Instance is of class A" << std::endl;
    else if (dynamic_cast<B*>(&p) != nullptr)
        std::cout << "Instance is of class B" << std::endl;
    else if (dynamic_cast<C*>(&p) != nullptr)
        std::cout << "Instance is of class C" << std::endl;
	else
		std::cout << "Invalid input" << std::endl;
}

int main() {
    Base *ptr = generate();
    identify(ptr);
    identify(*ptr);

    Base *ptr2 = generate();
    identify(ptr2);
    identify(*ptr2);

    Base *ptr3 = generate();
    identify(ptr3);
    identify(*ptr3);

    delete ptr;
    delete ptr2;
    delete ptr3;
    return 0;
}
