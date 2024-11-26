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

ScavTrap::ScavTrap() : 
{
	_name = "ScaVasia_default";
	std::cout << GRAY "ScavTrap " RED << _name << GRAY " is born! (Default constructor for " << this << " is called) " RESET << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << YELLOW "ScavTrap " RED  << _name << YELLOW " is dead! (Destructor for " << this << " is called) " RESET << std::endl;
}

