#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	_ideas[0] = "jkl";	// tracing
	std::cout << "Default constructor for \033[0;91m Brain \033[0;39m " << this << " is called!" << std::endl;
}

// Brain::Brain(Brain &other)
// {
// 	std::cout << "The copy constructor for \033[0;91m Brain \033[0;39m " << this << " is called!" << std::endl;
// }

Brain::~Brain()
{
	std::cout << "Destructor for \033[0;91m Brain \033[0;39m " << this << " is called!" << std::endl;
}

std::string const &Brain::getIdea(size_t index) const
{
	if (index > 99)
		return this->_ideas[99];
	return this->_ideas[index];
}