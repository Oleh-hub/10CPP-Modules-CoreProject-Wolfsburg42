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

Animal::~Animal()
{
	std::cout << YELLOW "Animal " RED  << _type << YELLOW " is dead! (Destructor for " << this << " is called) " RESET << std::endl;
}
