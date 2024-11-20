#include "ClapTrap.hpp"

/* int main()
{
	// ClapTrap <name> attacks <target>, causing <damage> points of damage!
	ClapTrap a;
	ClapTrap b("Vasya");
	// ClapTrap b = a;
} */

#include "ClapTrap.hpp"

int main() 
{
	ClapTrap cla4p_tp;
	ClapTrap bob("Bob");
	ClapTrap dave("Dave");
	ClapTrap olh(bob);	// copy constructor used 1811


	std::cout << "Имя cla4p_tp: " << cla4p_tp.getName() << std::endl;
	std::cout << "Имя bob: " << bob.getName() << std::endl;
	std::cout << "Имя dave: " << dave.getName() << std::endl;
	std::cout << "Имя olh: " << olh.getName() << std::endl << std::endl;
	{
		for (int i = 0; i < 10; i++)
			cla4p_tp.attack("Barrel");
		for (int i = 0; i < 3; i++)
		{
			cla4p_tp.attack("Bob");
			bob.takeDamage(cla4p_tp.getAttackDamage());
		}
	}
	{
		std::cout << bob.getName() << " has " << bob.getHitPoints() << " points!" << std::endl;
		std::cout << std::endl;
		for (int i = 0; i < 10; i++)
			bob.beRepaired(1);
		std::cout << bob.getName() << " has " << bob.getHitPoints() << " points!" << std::endl;
		bob.attack("the air");
		std::cout << std::endl;
		for (int i = 0; i < 3; i++)
			bob.takeDamage(10);
	}
	std::cout << std::endl;
}
