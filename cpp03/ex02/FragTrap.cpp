#include "FragTrap.hpp"
# define FRAG_ENERGYPOINTS 100
# define FRAG_ATTACKDEMAGE 30
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

FragTrap::FragTrap() : ClapTrap("Fragasia_default")
{
	_energyPoints = FRAG_ENERGYPOINTS;
	_attackDamage = FRAG_ATTACKDEMAGE;
	std::cout << GRAY "FragTrap " RED << _name << GRAY " is born! (Default constructor for " << this << " is called) " RESET << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	_name = name;
	_energyPoints = FRAG_ENERGYPOINTS;
	_attackDamage = FRAG_ATTACKDEMAGE;
	std::cout << GRAY "FragTrap " RED  << _name << GRAY " is born! (Constructor for " << this << " is called) " RESET << std::endl;
}
// Copy constructor and assignment operator
FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	std::cout << GREEN "Copy constructor for FragTrap " RED << _name << GREEN " " << this << " is called " RESET << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << YELLOW "ScavTrap " RED  << _name << YELLOW " is dead! (Destructor for " << this << " is called) " RESET << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " RED  << _name << ":  Hi, buddy! Give me high five!" << std::endl;
}
