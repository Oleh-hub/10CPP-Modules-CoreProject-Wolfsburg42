#include "Form.hpp"

std::string Form::getName() const
{
	return _name;
}

bool Form::getSigned() const
{
	return _signed;
}

int Form::qetGrade2sign() const
{
	return _grade2sign;
}

int Form::getGrade2exe() const
{
	return _grade2exe;
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

Form::Form(std::string &name, int grade2sign, int grade2exe) : _name(name), _signed(false), _grade2sign(grade2sign), _grade2exe(grade2exe)
{
	// grade2sign and grade2exe to be checked
}

Form & Form::operator=(const Form &rhs)
{
	if (this!= &rhs)
	{
		_name = rhs._name;
		_signed = rhs._signed;
		_grade2sign = rhs._grade2sign;
		_grade2exe = rhs._grade2exe;
	}
	return *this;
}

Form::Form(const Form &rhs)
{
	*this = rhs;
}

Form::~Form()
{
}

std::ostream & operator<<(std::ostream &out, const Form &rhs)
{
	out << "Form: " << rhs.getName() << "has grade to sign " << rhs.qetGrade2sign() << ", grade to execute "<< rhs.getGrade2exe() << "current state if it is signed: "<< rhs.getSigned();
	return out;
}

const char * Form::GradeTooHighException::what() const throw()
{
	return "The Form grade is too high!";
}

const char * Form::GradeTooLowException::what() const throw()
{
	return "The Form grade is too low!";
}