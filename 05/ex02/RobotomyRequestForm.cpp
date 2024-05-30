
#include "RobotomyRequestForm.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other), _target(other._target) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
    if (this != &other) {
        _target = other._target;
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    if (getIsSigned() == false)
        throw FormNotSignedException();
    else if (executor.getGrade() > getGradeToExec())
		throw GradeTooLowException();

	std::cout << "*-----*--Makes some drilling noises--*-----*" << std::endl;
    std::srand(std::time(0));
    int n = std::rand();
    if (n % 2)
        std::cout << _target << " has been successfully robotomized" << std::endl;
    else
        std::cout << _target << " robotomy has failed" << std::endl;
}