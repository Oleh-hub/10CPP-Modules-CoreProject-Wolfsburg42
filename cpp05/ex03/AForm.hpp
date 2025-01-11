#ifndef AForm_HPP
# define AForm_HPP
# include "Bureaucrat.hpp"
# include <iostream>
# include <exception>

class Bureaucrat;

class AForm
{
	private:
		std::string _name;
		bool _signed;
		int _grade2sign;
		int _grade2exe;
		AForm();

	public:
		std::string getName() const;
		bool getSigned() const;
		int qetGrade2sign() const;
		int getGrade2exe() const;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
		class NotSignedException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
		void beSigned (const Bureaucrat &rhs);
		
		AForm(std::string const &name, int grade2sign, int grade2exe);
		AForm & operator=(const AForm &rhs);
		AForm (const AForm &rhs);
		virtual ~AForm();
		virtual void execute(Bureaucrat const & executor) const = 0;  // the function is made absulute abstuct, since all the children classes R supposed 2 do different things
};
		

std::ostream & operator<<(std::ostream &out, const AForm &rhs);
#endif //AForm.hpp