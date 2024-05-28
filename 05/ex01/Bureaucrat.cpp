
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

//Constructors

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade) {}

Bureaucrat::~Bureaucrat() {}

//Operators

std::ostream& operator<<(std::ostream& out, const Bureaucrat& o) {
	return out << o.getName() << ", bureaucrat grade " << o.getGrade() << ".";
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    if (this != &other) {
		const_cast<std::string&>(_name) = other._name; //bad parctice
		this->_grade = other.getGrade();
    }
    return *this;
}

//Exception functions

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade too low";
}

//Member functions

int Bureaucrat::getGrade() const {
	return _grade;
}

std::string Bureaucrat::getName() const {
	return _name;
}

void Bureaucrat::increaseGrade() {
	if (_grade <= 1)
		throw GradeTooHighException();
	_grade--;
}

void Bureaucrat::decreaseGrade() {
	if (_grade >=150)
		throw GradeTooLowException();
	_grade++;
}

void Bureaucrat::signForm(Form & form) {
	try {
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	} catch (std::exception &e) {
		std::cout << _name << " couldn’t sign " << form.getName() << " because " << e.what() << std::endl;
	}
}