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

// ScavTrap::ScavTrap() : _name("ScaVasia_default"), _hitPoints(HITPOINTS), _energyPoints(ENERGYPOINTS), _attackDamage(ATTACKDEMAGE)
ScavTrap::ScavTrap()
{
	_name = "ScaVsia_default";
	// _hitPoints = HITPOINTS;
	// _energyPoints = ENERGYPOINTS;
	// _attackDamage = ATTACKDEMAGE;
	std::cout << GRAY "ScavTrap " RED << _name << GRAY " is born! (Default constructor for " << this << " is called) " RESET << std::endl;
}
