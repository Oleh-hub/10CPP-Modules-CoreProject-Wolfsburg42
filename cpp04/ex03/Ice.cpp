#include "Ice.hpp"
#include "colors.hpp"

Ice::Ice() //:  _type("ice")
{
	this->_type = "ice";
	// std::cout << GRAY "Ice _type " RED << this->_type << GRAY " " << this << " is being constructed by default"  RESET << std::endl;
}

Ice::Ice(const Ice &other) : AMateria(other)
{
	this->_type = other._type;
	// std::cout << GRAY "Ice _type " RED << this->_type << GRAY " " << this << " is being constructed by copying"  RESET << std::endl;
}

Ice & Ice::operator=(const Ice &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		// std::cout << CYAN "Ice operator= for " RED << _type << " " << CYAN << this << " is bing called " RESET << std::endl;
	}
	return *this;
}

Ice::~Ice()
{
	// std::cout << GRAY "Ice _type " RED << this->_type << GRAY " " << this << " is being destructed"  RESET << std::endl;
}

AMateria* Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
	std::cout << " shots an ice bolt at " << RED << target.getName() << RESET << std::endl;
}
