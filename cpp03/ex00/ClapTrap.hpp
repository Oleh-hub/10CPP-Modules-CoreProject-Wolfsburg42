#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>
# define CLAPTRAP_HITPOINTS 10
# define CLAPTRAP_ENERGYPOINTS 10
# define CLAPTRAP_ATTACKDEMAGE 0

class ClapTrap
{
	protected:
		std::string _name;
		unsigned int _hitPoints;
		unsigned int _energyPoints;
		unsigned int _attackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &other);// copy constructor
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap &other); // assignment operator
		
		// getters -----------1118 roi
		std::string const &getName() const;
		unsigned int getHitPoints() const;
		unsigned int getEnergyPoints() const;
		unsigned int getAttackDamage() const;
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		// unsigned int getHitPoints();
};
#endif // CLAPTRAP_HPP