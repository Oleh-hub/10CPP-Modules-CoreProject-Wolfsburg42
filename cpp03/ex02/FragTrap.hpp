#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
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