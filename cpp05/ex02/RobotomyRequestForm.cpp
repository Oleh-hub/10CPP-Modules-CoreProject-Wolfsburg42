#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm constructor with parameter was called " << this << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "~RobotomyRequestForm() was called " << this << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!getSigned())
		throw NotSignedException();
	if (this->getGrade2exe() < executor.getGrade() )
		throw GradeTooHighException();
	/* ... */
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