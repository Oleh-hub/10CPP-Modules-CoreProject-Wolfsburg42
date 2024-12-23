#include "AMateria.hpp"
#include "colors.hpp"

AMateria::AMateria() : _type("AMateria")
{
	// std::cout << GRAY "AMateria _type " RED << _type << GRAY " " << this << " is being constructed by default"  RESET << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	// std::cout << GRAY "AMateria _type " RED << _type << GRAY " " << this << " is being constructed with paramter \"" << type  << "\""<<  RESET << std::endl;
}

AMateria::AMateria(const AMateria &other) : _type(other._type)
{
	// std::cout << GRAY "AMateria _type " RED << _type << GRAY " " << this << " is being constructed by copying"  RESET << std::endl;
}

AMateria & AMateria::operator=(const AMateria &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		// std::cout << CYAN "AMateria operator= for " RED << _type << " " << CYAN << this << " is bing called " RESET << std::endl;
	}
	return *this;
}

AMateria::~AMateria()
{
	// std::cout << GRAY "AMateria _type " RED << _type << GRAY " " << this << " is being destructed"  RESET << std::endl;
}

std::string const & AMateria::getType() const
{
	return this->_type;
}
