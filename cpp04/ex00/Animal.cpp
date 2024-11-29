#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << GRAY "Animal " RED << _type << GRAY " is born! (Default constructor for " << this << " is called) " RESET << std::endl;
}

Animal::Animal(std::string newAnimalName) : _type(newAnimalName)
{
	std::cout << GRAY "Animal " RED  << _type << GRAY " is born! (Constructor for " << this << " is called) " RESET << std::endl;
}

Animal::Animal(const Animal &other)
{
	this->_type = other._type;
	std::cout << GRAY "Animal " RED  << _type << GRAY " is born! (Copy constructor for " << this << " is called) " RESET << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		std::cout << CYAN "Animal operator assignment for " RED << _type << " " << CYAN << this << " is called " RESET << std::endl;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << YELLOW "Animal " RED  << _type << YELLOW " is dead! (Destructor for " << this << " is called) " RESET << std::endl;
}

std::string const &Animal::getType() const
{
	return this->_type;
}

void Animal::makeSound() const
{
	std::cout << "Animal " RED << getType() << RESET ": farts!" << std::endl;
}