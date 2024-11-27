#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"
# define FRAG_HITPOINTS 100
# define FRAG_ENERGYPOINTS 100
# define FRAG_ATTACKDEMAGE 30

class FragTrap : virtual public ClapTrap
{
	private:
	public:
		FragTrap();	// default constructor
		FragTrap(std::string name);
		FragTrap(const FragTrap &other);// copy constructor
		~FragTrap();
		
		void highFivesGuys(void);
};

#endif // FRAGTRAP_HPP