
#include "Form.hpp"
#include <iostream>

//Constructors

Form::Form() : _name("Default"), _isSigned(false), _gradeToSign(150), _gradeToExec(150) {}

Form::Form(std::string name, int gradeToSign, int gradeToExec) : _name(name), _isSigned(false), 
_gradeToSign(gradeToSign),_gradeToExec(gradeToExec) {
	if (gradeToSign < 1 || gradeToExec < 1)
		throw GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExec > 150)
		throw GradeTooLowException();
}

Form::Form(const Form& other)  : _name(other._name), _isSigned(false), _gradeToSign(other._gradeToSign),
 _gradeToExec(other._gradeToExec) {}

Form::~Form() {}

//Operators

std::ostream& operator<<(std::ostream& out, const Form& o) {
	return out << "Form: " << o.getName() << " | Grade to sign: " << o.getGradeToSign()
			   << " | Grade to execute: " << o.getGradeToExec() << " | Is form signed: "
			   << (o.getIsSigned() ? "true" : "false");
}

Form& Form::operator=(const Form& other) {
    if (this != &other) {
		const_cast<std::string&>(_name) = other.getName();
		const_cast<int&>(_gradeToSign) = other.getGradeToSign();
		const_cast<int&>(_gradeToExec) = other.getGradeToExec();
		_isSigned = other.getIsSigned();
    }
	//return *new Form(other);
    return *this;
}

//Exceptions

const char* Form::GradeTooHighException::what() const throw() {
	return "grade is too high";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "grade is too low";
}

const char* Form::FormAlreadySignedException::what() const throw() {
	return "form is already signed";
}
//Member functions

void Form::beSigned(Bureaucrat bureaucrat) {
	if (_isSigned == true)
		throw FormAlreadySignedException();
	else if (bureaucrat.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	_isSigned = true;
}

std::string Form::getName() const {
	return _name;
}

int Form::getGradeToSign() const {
	return _gradeToSign;
}

int Form::getGradeToExec() const {
	return _gradeToExec;
}

bool Form::getIsSigned() const {
	return _isSigned;
}
