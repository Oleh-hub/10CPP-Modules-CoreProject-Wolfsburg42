#include "RobotomyRequestForm.hpp"
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm constructor with parameter was called " << this << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "~RobotomyRequestForm() was called " << this << std::endl;
}

/*
Makes some drilling noises. Then, informs that <target> has been robotomized
successfully 50% of the time. Otherwise, informs that the robotomy failed.
*/
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!getSigned())
		throw NotSignedException();
	if (this->getGrade2exe() < executor.getGrade() )
		throw GradeTooHighException();
	std::cout << "ZZZZZZZZZZZZZZZZZ" << std::endl;
	// std::cout << RAND_MAX << std::endl;
	if (rand() % 2)
		std::cout << _target << "has been robotomized!" << std::endl;
	else
		std::cout << "Robotomy failed." << std::endl;
	std::cout << executor.getName() << " executed " << getName() << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	if (this != &rhs)
	{
		AForm::operator=(rhs);
		_target = rhs._target;
	}
	std::cout << "RobotomyRequestForm::operator= was called " << this << std::endl;
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs) : AForm(rhs), _target(rhs._target)
{
	std::cout << "RobotomyRequestForm copy constructor was called " << this << std::endl;
}

const std::string & RobotomyRequestForm::getTargetName() const
{
	return _target;
}