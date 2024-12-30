#include "Form.hpp"

std::string Form::getName() const
{
	return _name;
}

void Form::beSigned (const Bureaucrat &rhs)
{
	// <bureaucrat> signed <form>
	if (!_signed && _grade2sign >= rhs.getGrade())
		std::cout << rhs.getName() << " signed " << getName()  << std::endl;
	else 
	{
		// <bureaucrat> couldn’t sign <form> because <reason>.
		std::cout << rhs.getName() << " couldn’t sign " << getName() << " because ";
		if (_signed)
			std::cout << "the form is already signed" << std::endl;
		else
			std::cout << "the bureaucrat grade is not high enough" << std::endl;
	}
}
