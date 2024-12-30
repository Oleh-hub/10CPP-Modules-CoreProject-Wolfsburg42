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

	public:
		std::string getName() const;
		bool getSigned();
		int qetGrade2sighn();
		int getGrade2exe();
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
};

std::ostream & operator<<(std::ostream &out, const Form &rhs);
#endif //Form.hpp