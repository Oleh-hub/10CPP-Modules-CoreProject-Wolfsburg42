#include "ScavTrap.hpp"
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

ScavTrap::ScavTrap() : ClapTrap("ScaVasia_default")
{
	_hitPoints = 	SCAVTRAP_HITPOINTS;
	_energyPoints = SCAVTRAP_ENERGYPOINTS;
	_attackDamage = SCAVTRAP_ATTACKDEMAGE;
	std::cout << GRAY "ScavTrap " RED << _name << GRAY " is born! (Default constructor for " << this << " is called) " RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	_name = name;
	_hitPoints = 	SCAVTRAP_HITPOINTS;
	_energyPoints = SCAVTRAP_ENERGYPOINTS;
	_attackDamage = SCAVTRAP_ATTACKDEMAGE;
	std::cout << GRAY "ScavTrap " RED  << _name << GRAY " is born! (Constructor for " << this << " is called) " RESET << std::endl;
}
// Copy constructor and assignment operator
ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	std::cout << GREEN "Copy constructor for ScavTrap " RED << _name << GREEN " " << this << " is called " RESET << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << BLUE "ScavTrap " RED << _name << BLUE " attacks " << target << ", causing " << _attackDamage << " points of damage!" RESET << std::endl;
		_energyPoints--;
	}
	else
		std::cout << BLUE "ScavTrap " RED << _name << BLUE " is out of energy or dead!" RESET << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << MAGENTA "ScavTrap " RED << this->getName() << MAGENTA " is now in Gate Keeper mode." RESET << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << YELLOW "ScavTrap " RED  << _name << YELLOW " is dead! (Destructor for " << this << " is called) " RESET << std::endl;
}


