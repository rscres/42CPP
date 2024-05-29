
#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& other) {
    (void)other;
}

Intern& Intern::operator=(const Intern& other) {
    (void)other;
    return *this;
}

Intern::~Intern() {}

AForm* Intern::makeForm(std::string form, std::string target) {
    std::string forms[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
    AForm* newForm = NULL;
    int form_num = -1;
    for (int i = 0; i < 3; i++) {
        if (form.compare(forms[i]) == 0)
            form_num = i;
    }
    switch (form_num) {
        case PRESIDENTIAL:
            std::cout << "PresidentialPardonForm successfully created" << std::endl;
            newForm = new PresidentialPardonForm(target);
            break;
        case ROBOTOMY:
            std::cout << "RobotomyRequestForm successfully created" << std::endl;
            newForm = new RobotomyRequestForm(target);
            break;
        case SHRUBBERY:
            std::cout << "ShrubberyCreationForm successfully created" << std::endl;
            newForm = new ShrubberyCreationForm(target);
            break;
        default:
            std::cerr << "Invalid form name" << std::endl;
    }
    return newForm;
}