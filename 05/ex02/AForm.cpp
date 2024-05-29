
#include "AForm.hpp"
#include <iostream>

//Constructors

AForm::AForm() : _name("Default"), _isSigned(false), _gradeToSign(150), _gradeToExec(150) {}

AForm::AForm(std::string name, int gradeToSign, int gradeToExec) : _name(name), _isSigned(false), 
_gradeToSign(gradeToSign),_gradeToExec(gradeToExec) {
	if (gradeToSign < 1 || gradeToExec < 1)
		throw GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExec > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm& other)  : _name(other._name), _isSigned(false), _gradeToSign(other._gradeToSign),
 _gradeToExec(other._gradeToExec) {}

AForm::~AForm() {}

//Operators

std::ostream& operator<<(std::ostream& out, const AForm& o) {
	return out << "Form: " << o.getName() << " | Grade to sign: " << o.getGradeToSign()
			   << " | Grade to execute: " << o.getGradeToExec() << " | Is form signed: "
			   << (o.getIsSigned() ? "true" : "false");
}

AForm& AForm::operator=(const AForm& other) {
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

const char* AForm::GradeTooHighException::what() const throw() {
	return "grade is too high";
}

const char* AForm::GradeTooLowException::what() const throw() {
	return "grade is too low";
}

const char* AForm::FormAlreadySignedException::what() const throw() {
	return "form is already signed";
}

const char* AForm::FormNotSignedException::what() const throw() {
	return "form is not signed";
}

//Member functions

void AForm::beSigned(Bureaucrat bureaucrat) {
	if (_isSigned == true)
		throw FormAlreadySignedException();
	else if (bureaucrat.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	_isSigned = true;
}

//Getters
std::string AForm::getName() const {
	return _name;
}

int AForm::getGradeToSign() const {
	return _gradeToSign;
}

int AForm::getGradeToExec() const {
	return _gradeToExec;
}

bool AForm::getIsSigned() const {
	return _isSigned;
}

//Setters
void AForm::setIsSigned(bool sign) {
	_isSigned = sign;
}