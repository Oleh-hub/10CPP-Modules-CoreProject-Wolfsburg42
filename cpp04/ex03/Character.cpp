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
	for (int i = 4; i < 4; i++)
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			std::cout << getName() << ": Added " << m->getType() << " Materia into inventory slot " << i << std::endl;
			return;
		}
	std::cout << getName() << ": Inventory is full, could not add " << m->getType() << " Materia." << std::endl;
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