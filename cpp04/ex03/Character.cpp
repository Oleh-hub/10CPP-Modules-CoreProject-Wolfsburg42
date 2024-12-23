#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() : _name("Nobody")
{
	for (int i = 0; i < 4; i++)
		 _inventory[i] = NULL;
}

Character::Character(const std::string &name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		 _inventory[i] = NULL;
}

std::string const & Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	if (m==NULL)
	{
		std::cout << getName() << ": Could not equip object. Unknown reference!" << std::endl;
		return;
	}
	for (int i = 0; i < 4; i++)
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			std::cout << getName() << ": Added "  << RED << m->getType() << RESET  << " Materia into inventory slot " << i << std::endl;
			return;
		}
	std::cout << getName() << ": Inventory is full, could not add " << RED << m->getType() << RESET << " Materia." << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
		{
			delete _inventory[i];
			_inventory[i] = NULL;
		}
	}
}

// operator overload
Character & Character::operator=(const Character &other)
{
	std::cout << "Character copy assignment operator is being called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			delete _inventory[i];
			if (other._inventory[i])
				_inventory[i] = other._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
		_name = other._name;
	}
	return *this;
}

void Character::use(int idx, Character& target)
{
	//  AMateria *_inventory[idx];	//
	//  std::string _name;			//

	//  std::cout << _name << ": _inventory[" << idx << "]==" << _inventory[idx]->getType() << " was used on " << target.getName() << std::endl;
	 std::cout << RED << this->_name << RESET;
	 _inventory[idx]->use(target);
	 std::cout << GREEN << target.getName() << RESET << std::endl;
}
