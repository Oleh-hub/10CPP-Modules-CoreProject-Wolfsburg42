#include "Ice.hpp"
#include "colors.hpp"

Ice::Ice() //:  _type("ice")
{
	this->_type = "ice";
	std::cout << GRAY "Ice _type " RED << _type << GRAY " " << this << " is being constructed by default"  RESET << std::endl;
}

Ice::~Ice()
{
	std::cout << GRAY "Ice _type " RED << _type << GRAY " " << this << " is being destructed"  RESET << std::endl;
}

AMateria* Ice::clone() const
{
	return new Ice(*this);
}