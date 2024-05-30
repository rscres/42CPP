#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstddef>

Base * generate(void) {
    Base *newBase = NULL;
	static bool runSrand = true;

	if (runSrand) {
		std::srand(std::time(0));
		runSrand = false;
	}

	int randomNum = std::rand() % 3;
	switch(randomNum) {
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
	if (p == NULL) {
		std::cout << "Pointer is NULL" << std::endl;
		return;
	}
    if (dynamic_cast<A*>(p) != NULL)
        std::cout << "Instance is of class A" << std::endl;
    else if (dynamic_cast<B*>(p) != NULL)
        std::cout << "Instance is of class B" << std::endl;
    else if (dynamic_cast<C*>(p) != NULL)
        std::cout << "Instance is of class C" << std::endl;
	else
		std::cout << "Invalid class" << std::endl;
}

void identify(Base& p) {
	try {
		A& ptr = dynamic_cast<A&>(p);
		(void)ptr;
		std::cout << "Instance is of class A" << std::endl;
		return;
	} catch (std::exception &e) {
			try {
			B& ptr = dynamic_cast<B&>(p);
			(void)ptr;
			std::cout << "Instance is of class B" << std::endl;
			return;
		} catch (std::exception &e) {
			try {
				C& ptr = dynamic_cast<C&>(p);
				(void)ptr;
				std::cout << "Instance is of class C" << std::endl;
				return;
			} catch (std::exception &e) {
				std::cerr << "Error: Invalid class" << std::endl;
				return;
			}
		}
	}
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
