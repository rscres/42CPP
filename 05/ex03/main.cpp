
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main(void) { //redo this
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

    Intern mob;

    AForm *form1 = mob.makeForm("PresidentialPardonForm", "Trillian");
    AForm *form2 = mob.makeForm("RobotomyRequestForm", "Marvin");
    AForm *form3 = mob.makeForm("ShrubberyCreationForm", "groovy_grove");
    AForm *form4 = mob.makeForm("Whatever", "groovy_grove");

    zaphod.executeForm(*form2);
    zaphod.signForm(*form2);
    zaphod.executeForm(*form2);

    delete form1;
    delete form2;
    delete form3;
    delete form4;

    mob.makeForm("Eject from Spaceship", "The Impostor");
}

