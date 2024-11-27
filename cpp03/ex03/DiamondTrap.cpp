#include "DiamondTrap.hpp"
// fancy colors
# define RESET 		"\033[0;39m"
# define GRAY		"\033[0;90m"
# define RED		"\033[0;91m"
# define GREEN 		"\033[0;92m"
# define YELLOW		"\033[0;93m"
# define BLUE		"\033[0;94m"
# define MAGENTA 	"\033[0;95m"
# define CYAN		"\033[0;96m"
# define WHITE		"\033[0;97m"

DiamondTrap::DiamondTrap() : _name(ClapTrap::_name)
{
	ClapTrap::_name = "ClapTrap_NewDefaultName";
	// this->_name = ClapTrap::_name; // may b used instead of inilist
	this->_hitPoints	= FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
	std::cout << GRAY "DiamondTrap " RED << _name << GRAY " is born! (Default constructor for " << this << " is called) " RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : _name(name)
{
	ClapTrap::_name = "ClapTrap_" + name;
	// this->_name = name;
	this->_hitPoints	= FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
	std::cout << GRAY "DiamondTrap " RED  << _name << GRAY " is born! (Constructor for " << this << " is called) " RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	std::cout << GREEN "Copy constructor for DiamondTrap " RED << _name << GREEN " " << this << " is called " RESET << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << GREEN "I am a: " BLUE << this->_name << RESET << std::endl;
    std::cout << GREEN "I am from: " BLUE << ClapTrap::_name << RESET << std::endl;
}

std::string const &DiamondTrap::getName() const
{
	return this->_name;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << YELLOW "DiamondTrap " RED  << _name << YELLOW " is dead! (Destructor for " << this << " is called) " RESET << std::endl;
}