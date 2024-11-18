#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# define HITPOINTS 10
# include <iostream>
# include <string>


class ClapTrap
{
	private:
		std::string _name;
		unsigned int _hitPoints;
		unsigned int _energyPoints;
		unsigned int _attackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap &other); // copy constructor
		std::string getName(); // _name getter---------------1118 roi
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		// unsigned int getHitPoints();
		ClapTrap &operator=(const ClapTrap &other); // assignment operator
};
#endif // CLAPTRAP_HPP