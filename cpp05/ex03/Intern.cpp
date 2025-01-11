#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Default constructor Intern() is been called." << std::endl;
}

// just could not implement it if declared as '= default'
Intern::Intern(const Intern &rhs)
{
	*this = rhs;
	std::cout << "Copy constructor Intern(const Intern &rhs) is been called." << std::endl;
}

// just could not implement it if declared as '= default'
Intern & Intern::operator=(const Intern &rhs)
{
	(void) rhs;
	std::cout << "Intern::operator=() was called." << std::endl;
	return *this;
}

Intern::~Intern()
{
	std::cout << "Destructor ~Intern() is been called." << std::endl;
}

/*
creates one of these 3 froms:
- ShrubberyCreationForm
- RobotomyRequestForm
- PresidentialPardonForm
but only if the formName -s are indicated correctly!
*/
AForm *Intern::makeForm(const std::string &formName, const std::string &target)
{

}