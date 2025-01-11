#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include "AForm.hpp"
# include <exception>
# include <iostream>

class AForm;

class Bureaucrat
{
	private:
		std::string _name;
		int _grade;
	
	public:
		Bureaucrat();
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat &operator=(const Bureaucrat &other);
		~Bureaucrat();

		std::string getName() const;
		int getGrade() const;
		// creatig the child classes of exception to substitue virtual exception::what() - roi 241229
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		// increment or decrement the bureaucrat grade
		void incGrade();
		void decGrade();
		void signAForm(AForm &rhs);
		void executeForm(AForm const & form);
};

std::ostream & operator<<(std::ostream &out, const Bureaucrat &rhc);

#endif //BUREAUCRAT_HPP