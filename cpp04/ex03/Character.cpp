#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() : _name("Nobody")
{
    for (int i = 0; i < 4; i++)
         _inventory[i] = NULL;
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