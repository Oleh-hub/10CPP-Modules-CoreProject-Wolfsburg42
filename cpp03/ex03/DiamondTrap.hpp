#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

// class DiamondTrap : public FragTrap, public ScavTrap  // the member  derive from ScavTrap
class DiamondTrap : public ScavTrap, public FragTrap // the member  derive from FragTrap
{
	private:
		std::string _name;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &other); // copy constructor
		~DiamondTrap();
		void whoAmI();
		std::string const &getName() const;
		using ScavTrap::attack; // accesive in this very code my generally the easiest way to use one of the same name functions of the parent classes 
};
#endif //DIAMONDTRAP_HPP