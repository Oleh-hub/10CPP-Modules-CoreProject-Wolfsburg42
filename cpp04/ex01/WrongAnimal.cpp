#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << GRAY "WrongAnimal " RED << _type << GRAY " is born! (Default constructor for " << this << " is called) " RESET << std::endl;
}

WrongAnimal::WrongAnimal(std::string newWrongAnimalName) : _type(newWrongAnimalName)
{
	std::cout << GRAY "WrongAnimal " RED  << _type << GRAY " is born! (Constructor for " << this << " is called) " RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	this->_type = other._type;
	std::cout << GRAY "WrongAnimal " RED  << _type << GRAY " is born! (Copy constructor for " << this << " is called) " RESET << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		std::cout << CYAN "WrongAnimal operator assignment for " RED << _type << " " << CYAN << this << " is called " RESET << std::endl;
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << YELLOW "WrongAnimal " RED  << _type << YELLOW " is dead! (Destructor for " << this << " is called) " RESET << std::endl;
}

std::string const &WrongAnimal::getType() const
{
	return this->_type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal " RED << getType() << RESET ": farts!" << std::endl;
}