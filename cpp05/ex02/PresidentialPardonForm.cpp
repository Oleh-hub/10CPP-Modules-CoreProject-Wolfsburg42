#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", 72, 45), _target(target)
{
	std::cout << "PresidentialPardonForm constructor with parameter was called " << this << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "~PresidentialPardonForm() was called " << this << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!getSigned())
		throw NotSignedException();
	if (this->getGrade2exe() < executor.getGrade() )
		throw GradeTooHighException();
	/* ... */
	std::cout << executor.getName() << " executed " << getName() << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	if (this != &rhs)
	{
		AForm::operator=(rhs);
		_target = rhs._target;
	}
	std::cout << "PresidentialPardonForm::operator= was called " << this << std::endl;
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &rhs) : AForm(rhs), _target(rhs._target)
{
	std::cout << "PresidentialPardonForm copy constructor was called " << this << std::endl;
}