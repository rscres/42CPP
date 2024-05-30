
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main(void) {
    Bureaucrat zaphod("Zaphod", 1);
    Bureaucrat arthur("Arthur", 120);

    PresidentialPardonForm pardon("Dolphin");
    RobotomyRequestForm robForm("C3P0");
    ShrubberyCreationForm shrubs("garden_planet");

    arthur.signForm(pardon);
    zaphod.executeForm(pardon);
    zaphod.signForm(pardon);
    zaphod.executeForm(pardon);
    
	zaphod.signForm(robForm);
	arthur.executeForm(robForm);
    zaphod.executeForm(robForm);
    
	arthur.signForm(shrubs);
    arthur.executeForm(shrubs);
}

