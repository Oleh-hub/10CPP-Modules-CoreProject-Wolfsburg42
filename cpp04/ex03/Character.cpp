#include "Character.hpp"

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
		std::cout << RED << getName() << RESET ": Could not equip object with NULL reference!" << std::endl;
		return;
	}
	for (int i = 0; i < 4; i++)
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			std::cout << RED << getName() << RESET ": has equiped " RED << m->getType() << RESET " Materia into inventory slot " << i << std::endl;
			return;
		}
	std::cout << RED << getName() << RESET ": Inventory is full, could not add " RED << m->getType() << RESET " Materia." << std::endl;
}

// delete object of class  Materia is mandatory to avdoid memory leak
void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3 && _inventory[idx])
	{
		std::cout <<  RED << getName() << RESET ": Materia " RED << _inventory[idx]->getType() << RESET " from _inventory[" RED << idx << RESET << "] is being unequiped" << std::endl;
		delete _inventory[idx];
		_inventory[idx] = NULL;
	}
	else
		std::cout <<  RED << getName() << RESET ": there is NO Materia in _inventory[" RED << idx << RESET << "] to unequip" << std::endl;
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

void Character::use(int idx, ICharacter& target)
{
	//  std::cout << _name << ": _inventory[" << idx << "]==" << _inventory[idx]->getType() << " was used on " << target.getName() << std::endl;
	 std::cout << RED << this->_name << RESET;
	 _inventory[idx]->use(target);
	//  std::cout << GREEN << target.getName() << RESET << std::endl;
}
