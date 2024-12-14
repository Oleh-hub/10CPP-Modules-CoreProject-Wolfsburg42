#include "AMateria.hpp"
#include "colors.hpp"

AMateria::AMateria() : _type("AMateria")
{
	std::cout << GRAY "AMateria _type " RED << _type << GRAY " " << this << " is being constructed by default"  RESET << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << GRAY "AMateria _type " RED << _type << GRAY " " << this << " is being constructed with paramter \"" << type  << "\""<<  RESET << std::endl;
}

AMateria::~AMateria()
{
	std::cout << GRAY "AMateria _type " RED << _type << GRAY " " << this << " is being destructed"  RESET << std::endl;
}

