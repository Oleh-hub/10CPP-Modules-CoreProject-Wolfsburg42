#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm name consturctor was called with target _name: " << getTargetName() << " " << this << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
// 	std::cout << "operator= function is been called for " << getName() << " " << this << " " << *this << std::endl;
	if (this != &rhs)
	{
/* 		_name = rhs._name;
		_signed = rhs._signed;
		_grade2sign = rhs._grade2sign;
		_grade2exe = rhs._grade2exe; */
		AForm::operator=(rhs);
		_target = rhs._target;
	}
	std::cout << "operator= function is been called for " << getName() << " " << this << " " /* << *this  */<< std::endl;
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs) : AForm(rhs), _target(rhs._target)
{
	std::cout << "ShrubberyCreationForm copy constuctor was called " << this << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor was called " << this << std::endl;
}

/* void ShrubberyCreationForm::jklm() //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! tmp !!!!!!!!!!!!1
{
	std::cout << "ShrubberyCreationForm implements AForm class absolute virtual funciton jklm() " << this << std::endl;
} */

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!getSigned())
		throw NotSignedException();
	if (this->getGrade2exe() < executor.getGrade() )
		throw GradeTooHighException();
		/* ... */
	std::cout << executor.getName() << " executed " << getName() << std::endl;
}

std::string ShrubberyCreationForm::getTargetName()
{
	return _target;
}