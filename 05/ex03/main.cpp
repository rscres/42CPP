
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main(void) { //redo this
    Bureaucrat soninha("Soninha", 2);
    Bureaucrat flaviano("Flaviano", 120);

    PresidentialPardonForm pardon("Rods");
    RobotomyRequestForm robForm("Moulinette");
    ShrubberyCreationForm shrubs("groovy_grove");

    flaviano.signForm(pardon);
    soninha.executeForm(pardon);
    soninha.signForm(pardon);
    soninha.executeForm(pardon);
    soninha.signForm(robForm);
    soninha.executeForm(robForm);
    soninha.signForm(shrubs);
    soninha.executeForm(shrubs);

    Intern jmilson;

    AForm *form1 = jmilson.makeForm("PresidentialPardonForm", "Rods");
    AForm *form2 = jmilson.makeForm("RobotomyRequestForm", "Moulinette");
    AForm *form3 = jmilson.makeForm("ShrubberyCreationForm", "groovy_grove");
    AForm *form4 = jmilson.makeForm("ShrubberyCreationForm", "groovy_grove");

    delete form1;
    delete form2;
    delete form3;
    delete form4;

    jmilson.makeForm("Eject from Spaceship", "The Impostor");
}

