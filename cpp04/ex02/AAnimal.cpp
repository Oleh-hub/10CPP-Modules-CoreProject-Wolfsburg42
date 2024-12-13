#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal")
{
	std::cout << GRAY "AAnimal " RED << _type << GRAY " is born! (Default constructor for " << this << " is called) " RESET << std::endl;
}

AAnimal::AAnimal(std::string newAAnimalName) : _type(newAAnimalName)
{
	std::cout << GRAY "AAnimal " RED  << _type << GRAY " is born! (Constructor for " << this << " is called) " RESET << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{
	this->_type = other._type;
	std::cout << GRAY "AAnimal " RED  << _type << GRAY " is born! (Copy constructor for " << this << " is called) " RESET << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		std::cout << CYAN "AAnimal operator assignment for " RED << _type << " " << CYAN << this << " is called " RESET << std::endl;
	}
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << YELLOW "AAnimal " RED  << _type << YELLOW " is dead! (Destructor for " << this << " is called) " RESET << std::endl;
}

std::string const &AAnimal::getType() const
{
	return this->_type;
}

void AAnimal::makeSound() const
{
	std::cout << "AAnimal " RED << getType() << RESET ": farts!" << std::endl;
}