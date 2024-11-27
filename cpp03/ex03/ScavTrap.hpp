#ifndef SCAVTRAP_HPP
#include "ClapTrap.hpp"
# define SCAVTRAP_HITPOINTS 100
# define SCAVTRAP_ENERGYPOINTS 50
# define SCAVTRAP_ATTACKDEMAGE 20

class ScavTrap : virtual public ClapTrap // 'virtual' here allows to use ClapTrap class in a class derived from ScavTrap
{
	private:
	public:
		ScavTrap();	// default constructor
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &other);// copy constructor
		~ScavTrap();
		// ScavTrap &operator=(const ScavTrap &other); // assignment operator
		void attack(const std::string& target);
		void guardGate();
};

#endif // SCAVTRAP_HPP