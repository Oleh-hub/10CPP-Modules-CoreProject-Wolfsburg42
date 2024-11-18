#include "ClapTrap.hpp"

// The constructors and destructor must also display a message, so your peer-evaluators can easily see they have been called.
ClapTrap::ClapTrap() : _name("Vasia_default"), _hitPoints(HITPOINTS), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " is born! (Default constructor for " << this << " is called) " << std::endl;
}
ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " is born! (Constructor for " << this << " is called) " << std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " is dead! (Destructor for " << this << " is called) " << std::endl;
}
// Copy constructor and assignment operator
ClapTrap::ClapTrap(const ClapTrap &other)
{
	_name = other._name; // is it necessary? what is the sense to get a var with the name already existing!? roi 181124
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	std::cout << "Copy constructor for " << _name << " " << this << " is called " << std::endl;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
		std::cout << "Operator assignment for "<< _name << this << " is called " << std::endl;
	}
	return *this;
}
// public member functions
void ClapTrap::attack(const std::string& target)
{
	// ClapTrap <name> attacks <target>, causing <damage> points of damage!
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
	else
		std::cout << "ClapTrap " << _name << " is out of energy or dead!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > 0)
	{
		_hitPoints -= amount;
		std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	unsigned int repare_amount = 0;
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
		return ;
	}
	if(_hitPoints < HITPOINTS)
	{
		_hitPoints += amount;
		if (_hitPoints > HITPOINTS)
		{
			repare_amount = amount - (_hitPoints - HITPOINTS);
			_hitPoints = HITPOINTS;
		}
		else
			repare_amount = amount;
		std::cout << "ClapTrap " << _name << " is repaired by " << repare_amount << " points!" << std::endl;
	}
}

std::string ClapTrap::getName()
{
	return _name;
}
/* unsigned int ClapTrap::getHitPoints()
{
	return _hitPoints;
} */