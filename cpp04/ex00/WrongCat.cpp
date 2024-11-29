#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << GRAY "WrongCat " RED << _type << GRAY " is born! (Default constructor for " << this << " is called) " RESET << std::endl;
}

WrongCat::WrongCat(std::string newWrongCatName)
{
	_type = newWrongCatName;
	std::cout << GRAY "WrongCat " RED  << _type << GRAY " is born! (Constructor for " << this << " is called) " RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	this->_type = other._type;
	std::cout << GRAY "WrongCat " RED  << _type << GRAY " is born! (Copy constructor for " << this << " is called) " RESET << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		std::cout << CYAN "WrongCat operator assignment for " RED << _type << " " << CYAN << this << " is called " RESET << std::endl;
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << YELLOW "WrongCat " RED  << _type << YELLOW " is dead! (Destructor for " << this << " is called) " RESET << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat " RED << getType() << RESET ": mew-RRRR-barks!" << std::endl;
}