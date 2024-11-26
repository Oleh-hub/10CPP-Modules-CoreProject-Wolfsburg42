#include "ClapTrap.hpp"
// fancy colors:
# define RESET 		"\033[0;39m"
# define GRAY 		"\033[0;90m"
# define RED 		"\033[0;91m"
# define GREEN 		"\033[0;92m"
# define YELLOW 	"\033[0;93m"
# define BLUE 		"\033[0;94m"
# define MAGENTA 	"\033[0;95m"
# define CYAN 		"\033[0;96m"
# define WHITE 		"\033[0;97m"

// The constructors and destructor must also display a message, so your peer-evaluators can easily see they have been called.
ClapTrap::ClapTrap() : _name("Vasia_default"), _hitPoints(HITPOINTS), _energyPoints(ENERGYPOINTS), _attackDamage(ATTACKDEMAGE)
{
	std::cout << GRAY "ClapTrap " RED << _name << GRAY " is born! (Default constructor for " << this << " is called) " RESET << std::endl;
}
ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(HITPOINTS), _energyPoints(ENERGYPOINTS), _attackDamage(ATTACKDEMAGE)
{
	std::cout << GRAY "ClapTrap " RED  << _name << GRAY " is born! (Constructor for " << this << " is called) " RESET << std::endl;
}
// Copy constructor and assignment operator
ClapTrap::ClapTrap(const ClapTrap &other)
{
	_name = other._name; // what is the sense to get another var with the _name already existing!? roi 181124
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	std::cout << GREEN "Copy constructor for ClapTrap " RED << _name << GREEN " " << this << " is called " RESET << std::endl;
}
//Distuctor
ClapTrap::~ClapTrap()
{
	std::cout << YELLOW "ClapTrap " RED  << _name << YELLOW " is dead! (Destructor for " << this << " is called) " RESET << std::endl;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
		std::cout << CYAN "Operator assignment for " RED << _name << " " << CYAN << this << " is called " RESET << std::endl;
	}
	return *this;
}
// public member functions
void ClapTrap::attack(const std::string& target)
{
	// ClapTrap <name> attacks <target>, causing <damage> points of damage!
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << BLUE "ClapTrap " RED << _name << BLUE " attacks " << target << ", causing " << _attackDamage << " points of damage!" RESET << std::endl;
		_energyPoints--;
	}
	else
		std::cout << BLUE "ClapTrap " RED << _name << BLUE " is out of energy or dead!" RESET << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > 0)
	{
		_hitPoints -= amount;
		std::cout << MAGENTA "ClapTrap " RED << _name << MAGENTA " takes " << amount << " points of damage!" RESET << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	unsigned int repare_amount = 0;
	if (_hitPoints <= 0)
	{
		std::cout << CYAN "ClapTrap " RED  << _name << CYAN " is already dead!" RESET << std::endl;
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
		std::cout << CYAN "ClapTrap " RED << _name << CYAN " is repaired by " << repare_amount << " points!" RESET << std::endl;
	}
}
// Getters
std::string const &ClapTrap::getName() const
{
	return _name;
}
unsigned int ClapTrap::getHitPoints() const
{
	return _hitPoints;
}
unsigned int ClapTrap::getEnergyPoints() const
{
	return _energyPoints;
}
unsigned int ClapTrap::getAttackDamage() const
{
	return _attackDamage;
}