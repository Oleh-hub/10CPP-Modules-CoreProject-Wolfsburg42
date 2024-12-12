#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	// ideas_p =  new Brain();
	std::cout << GRAY "Cat " RED << _type << GRAY " is born! (Default constructor for " << this << " is called) " RESET << std::endl;
}

Cat::Cat(std::string newCatName)
{
	_type = newCatName;
	std::cout << GRAY "Cat " RED  << _type << GRAY " is born! (Constructor for " << this << " is called) " RESET << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	this->_type = other._type;
	std::cout << GRAY "Cat " RED  << _type << GRAY " is born! (Copy constructor for " << this << " is called) " RESET << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		std::cout << CYAN "Cat operator assignment for " RED << _type << " " << CYAN << this << " is called " RESET << std::endl;
	}
	return *this;
}

Cat::~Cat()
{
	// delete ideas_p;
	std::cout << YELLOW "Cat " RED  << _type << YELLOW " is dead! (Destructor for " << this << " is called) " RESET << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Cat " RED << getType() << RESET ": mews!" << std::endl;
}