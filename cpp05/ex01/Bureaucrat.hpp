#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include "Form.hpp"
# include <exception>
# include <iostream>
# define RESET		"\033[0;39m"
# define GRAY 		"\033[0;90m"
# define RED 		"\033[0;91m"
# define GREEN 		"\033[0;92m"
# define YELLOW 	"\033[0;93m"
# define BLUE 		"\033[0;94m"
# define MAGENTA 	"\033[0;95m"
# define CYAN 		"\033[0;96m"
# define WHITE 		"\033[0;97m"

class Form;

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
		void signForm(Form &rhs);
};

std::ostream & operator<<(std::ostream &out, const Bureaucrat &rhc);

#endif //BUREAUCRAT_HPP