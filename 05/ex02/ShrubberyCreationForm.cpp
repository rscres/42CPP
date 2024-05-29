
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other), _target(other._target) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
    if (this != &other) {
        _target = other._target;
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    if (getIsSigned() == false)
		throw FormNotSignedException();
	else if (executor.getGrade() > getGradeToExec())
		throw GradeTooLowException();
    std::string file = _target + "_shrubbery";
    std::ofstream outfile(file.c_str());
    outfile << "              v .   ._, |_  .," << std::endl
            << "           `-._\\/  .  \\ /    |/_" << std::endl
            << "               \\  _\\, y | \\//" << std::endl
            << "         _\\_.___\\, \\/ -.\\||" << std::endl
            << "           `7-,--.`._||  / / ," << std::endl
            << "           /'     `-. `./ / |/_.'" << std::endl
            << "                     |    |//" << std::endl
            << "                     |_    /" << std::endl
            << "                     |-   |" << std::endl
            << "                     |   =|" << std::endl
            << "                     |    |" << std::endl
            << "--------------------/ ,  . \\--------._" << std::endl;
    outfile.close();
}