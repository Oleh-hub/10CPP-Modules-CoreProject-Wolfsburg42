#ifndef SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
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