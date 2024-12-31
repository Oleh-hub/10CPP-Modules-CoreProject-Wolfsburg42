#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string _name;
		bool _signed;
		const int _grade2sign;
		const int _grade2exe;
		Form();

	public:
		std::string getName() const;
		bool getSigned() const;
		int qetGrade2sign() const;
		int getGrade2exe() const;
		
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char*what() const throw();
		};
		void beSigned (const Bureaucrat &rhs);
		
		Form(std::string &name, int grade2sign, int grade2exe);
		Form (const Form &rhs);
		Form & operator=(const Form &rhs);
		~Form();
};

std::ostream & operator<<(std::ostream &out, const Form &rhs);
#endif //Form.hpp