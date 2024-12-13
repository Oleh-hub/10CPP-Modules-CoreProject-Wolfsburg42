#include "Brain.hpp"
#include <iostream>
#include "colors.hpp"

Brain::Brain()
{
	std::cout << "Default constructor for" RED " Brain " RESET << this << " is called!" << std::endl;
}

Brain::Brain(const Brain &other)
{
	*this = other;
	std::cout << "Copy constructor for" RED " Brain " RESET << this << " is called!" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
	if (this != &other) 
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = other._ideas[i];
	}
	std::cout << "Assignment operator for " RED "Brain" RESET << this <<" is called!" << std::endl;
	return *this;
}

// Brain::Brain(Brain &other)
// {
// 	std::cout << "The copy constructor for \033[0;91m Brain \033[0;39m " << this << " is called!" << std::endl;
// }

Brain::~Brain()
{
	std::cout << "Destructor for " RED " Brain " RESET << this << " is called!" << std::endl;
}

std::string const &Brain::getIdea(size_t index) const
{
	if (index > 99)
		return this->_ideas[99];
	return this->_ideas[index];
}

void Brain::setIdea(const std::string &idea2get, size_t index)
{
	if (index > 99)
		_ideas[99] = idea2get;
	else
		_ideas[index] = idea2get;
}