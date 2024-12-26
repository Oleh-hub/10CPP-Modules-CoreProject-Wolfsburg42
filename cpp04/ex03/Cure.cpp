#include "Cure.hpp"
#include "colors.hpp"
#include "ICharacter.hpp"

Cure::Cure() //:  _type("Cure")
{
	this->_type = "cure";
}

Cure::Cure(const Cure &other) : AMateria(other)
{
	this->_type = other._type;
}

Cure & Cure::operator=(const Cure &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
}

Cure::~Cure()
{
}

AMateria* Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
