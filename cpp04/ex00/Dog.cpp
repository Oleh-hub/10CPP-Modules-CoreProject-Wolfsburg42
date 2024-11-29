#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << GRAY "Dog " RED << _type << GRAY " is born! (Default constructor for " << this << " is called) " RESET << std::endl;
}

Dog::Dog(std::string newDogName)
{
	_type = newDogName;
	std::cout << GRAY "Dog " RED  << _type << GRAY " is born! (Constructor for " << this << " is called) " RESET << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	this->_type = other._type;
	std::cout << GRAY "Dog " RED  << _type << GRAY " is born! (Copy constructor for " << this << " is called) " RESET << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		std::cout << CYAN "Dog operator assignment for " RED << _type << " " << CYAN << this << " is called " RESET << std::endl;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << YELLOW "Dog " RED  << _type << YELLOW " is dead! (Destructor for " << this << " is called) " RESET << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Dog " RED << getType() << RESET ": barks!" << std::endl;
}