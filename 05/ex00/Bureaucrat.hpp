
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <exception>

class Bureaucrat {
	private:
		std::string const	_name;
		int					_grade;
	
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator=(const Bureaucrat& other);
		~Bureaucrat();

		int getGrade() const ;
		std::string getName() const ;

		void increaseGrade();
		void decreaseGrade();

};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& o);

#endif // BUREAUCRAT_HPP
