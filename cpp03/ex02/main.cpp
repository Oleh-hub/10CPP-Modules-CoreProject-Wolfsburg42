
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() 
{
	ClapTrap cla4p_tp;
	ClapTrap bob("Bob");
	ClapTrap dave("Dave");
	ClapTrap olh(bob);

	std::cout << "cla4p_tp_default has name '" 	<< cla4p_tp.getName() 		<< "'." 				<<std::endl;
	std::cout << "cla4p_tp_default has " 		<< cla4p_tp.getHitPoints()	<< " hit points." 		<<std::endl;
	std::cout << "cla4p_tp_default has " 		<< cla4p_tp.getEnergyPoints() << " energy points." <<std::endl;
	std::cout << "cla4p_tp_default may cause "	<< cla4p_tp.getAttackDamage() << " attack demage." << std::endl;
	std::cout << "Имя cla4p_tp: " << cla4p_tp.getName() << std::endl;
	std::cout << "Имя bob: " << bob.getName() << std::endl;
	std::cout << "Имя dave: " << dave.getName() << std::endl;
	std::cout << "Имя olh: " << olh.getName() << std::endl << std::endl;
	{
		for (int i = 0; i < 5; i++)
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
		{
			if (bob.getHitPoints() < CLAPTRAP_HITPOINTS)
				bob.beRepaired(20);
			else
				break;
		}
		std::cout << bob.getName() << " has " << bob.getHitPoints() << " points!" << std::endl;
		bob.attack("the air");
		std::cout << std::endl;
		for (int i = 0; i < 3; i++)
			bob.takeDamage(10);
		std::cout << "//=====================ScvaTrap zone====================" << std::endl;
		ScavTrap zopa;
		std::cout << "zopa has name '" << zopa.getName() << "'." << std::endl;
		std::cout << "zopa has " << zopa.getHitPoints() << " hit points." << std::endl;
		std::cout << "zopa has " << zopa.getEnergyPoints() << " energy points." << std::endl;
		std::cout << "zopa may cause " << zopa.getAttackDamage() << " attack demage." << std::endl;
		// std::cout << zopa._name << std::endl;
		ScavTrap defined_name("defined_name");
		std::cout << "The name of the variable defined_name: '" << defined_name.getName() << "'" << std::endl;
		ScavTrap cpied_cnstrtr(defined_name);
		std::cout << "The name of the variable cpied_cnstrtr: '" << cpied_cnstrtr.getName() << "'" << std::endl;
		zopa.attack("defined_name");
		defined_name.takeDamage(SCAVTRAP_ATTACKDEMAGE);
		defined_name.beRepaired(SCAVTRAP_ATTACKDEMAGE);
		defined_name.guardGate();
		defined_name = zopa;
		std::cout << "defined_name has name '" 	<< defined_name.getName() << "'." << std::endl;
		std::cout << "defined_name has " 		<< defined_name.getHitPoints() << " hit points." << std::endl;
		std::cout << "defined_name has " 		<< defined_name.getEnergyPoints() << " energy points." << std::endl;
		std::cout << "defined_name may cause "	<< defined_name.getAttackDamage() << " attack demage." << std::endl;
		std::cout << "//=====================FragTrap zone====================" << std::endl;
		FragTrap fragtrap_default;
		std::cout << "fragtrap_default has name '" 	<< fragtrap_default.getName() 		<< "'." 				<< std::endl;
		std::cout << "fragtrap_default has " 		<< fragtrap_default.getHitPoints()	<< " hit points." 		<< std::endl;
		std::cout << "fragtrap_default has " 		<< fragtrap_default.getEnergyPoints() << " energy points." << std::endl;
		std::cout << "fragtrap_default may cause "	<< fragtrap_default.getAttackDamage() << " attack demage." << std::endl;
		FragTrap fragDfndName("FragDefined_Name");
		std::cout << "The name of the 'fragDfndName' variable : '" << fragDfndName.getName() << "'" << std::endl;
		FragTrap fragCpdCnstrtr(fragDfndName);
		std::cout << "The name of the variable fragCpdCnstrtr: '" << fragCpdCnstrtr.getName() << "'" << std::endl;
		fragCpdCnstrtr.attack(fragtrap_default.getName());
		fragtrap_default.takeDamage(FRAG_ATTACKDEMAGE);
		fragtrap_default.beRepaired(FRAG_ATTACKDEMAGE);
		std::cout << "Attention!, specific FragTrap function: " << std::endl;
		fragtrap_default.highFivesGuys();	//specific FragTrap function
		fragtrap_default = fragDfndName;
		std::cout << "fragtrap_default has now name '" 	<< fragtrap_default.getName() << "'." << std::endl;
		std::cout << "fragtrap_default has now " 		<< fragtrap_default.getHitPoints() << " hit points." << std::endl;
		std::cout << "fragtrap_default has now " 		<< fragtrap_default.getEnergyPoints() << " energy points." << std::endl;
		std::cout << "fragtrap_default may now cause "	<< fragtrap_default.getAttackDamage() << " attack demage." << std::endl;
	}
	std::cout << std::endl;
}
