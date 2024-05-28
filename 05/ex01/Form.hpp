
#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>

class Bureaucrat; //avoid circular dependency

class Form {
	private:
		const std::string _name;
		bool _isSigned;
		const int _gradeToSign;
		const int _gradeToExec;

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		class FormAlreadySignedException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

	public:
		Form();
		Form(std::string name, int gradeToSign, int gradeToExec);
		Form(const Form& other);
		Form& operator=(const Form& other);
		~Form();

		std::string getName() const ;
		int getGradeToSign() const ;
		int getGradeToExec() const ;
		bool getIsSigned() const ;

		void beSigned(Bureaucrat bureaucrat);
};

std::ostream& operator<<(std::ostream& out, const Form& o);

#endif // FORM_HPP
