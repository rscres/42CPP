
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main(void) {
	
	try {
		Form a("Form", 160, 10);
	} catch (std::exception &e) {
		std::cerr << "Caught Exception: " << e.what() << std::endl;
	}

	try {
		Form a("Form", 34, -10);
	} catch (std::exception &e) {
		std::cerr << "Caught Exception: " << e.what() << std::endl;
	}

	try {
		Form a("This form", 50, 50);
		std::cout << a << std::endl;
		Bureaucrat tommy("Tommy", 49);
		tommy.signForm(a);
		tommy.signForm(a);
	} catch (std::exception &e) {
		std::cerr << "Caught Exception: " << e.what() << std::endl;
	}

	try {
		Form a("That form", 50, 50);
		Bureaucrat jimmy("Jimmy", 51);
		jimmy.signForm(a);
		jimmy.increaseGrade();
		jimmy.signForm(a);
	} catch (std::exception &e) {
		std::cerr << "Caught Exception: " << e.what() << std::endl;
	}

	try {
		Form a("The other form", 50, 50);
		Bureaucrat tommy("Tommy", 49);
		tommy.decreaseGrade();
		tommy.decreaseGrade();
		tommy.signForm(a);
	} catch (std::exception &e) {
		std::cerr << "Caught Exception: " << e.what() << std::endl;
	}

	{ //change these tests
		Form f1("Building destruction", 25, 60);
		Bureaucrat b1("COO", 5);
		Form f2("Building construction", 10, 25);
		Bureaucrat b2("CEO", 1);
		Form f3(f1);
		Form f4;


		std::cout << "Bureaucrat with grade enough"	<< std::endl;
		b1.signForm(f1);
		b2.signForm(f2);

		f4 = f2;
		std::cout << f3 << std::endl;
		std::cout << f4 << std::endl;
	}
}

