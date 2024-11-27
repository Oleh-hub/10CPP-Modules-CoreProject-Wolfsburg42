#include "DiamondTrap.hpp"
// fancy colors:
# define RESET 		"\033[0;39m"
# define GRAY 		"\033[0;90m"
# define RED 		"\033[0;91m"
# define GREEN 		"\033[0;92m"
# define YELLOW 	"\033[0;93m"
# define BLUE 		"\033[0;94m"
# define MAGENTA 	"\033[0;95m"
# define CYAN 		"\033[0;96m"
# define WHITE 		"\033[0;97m"

int main()
{
    std::cout << YELLOW << "Testing ClapTrap" << RESET << std::endl;
    ClapTrap Vera("Vera");
    Vera.attack("Pavel");
    Vera.takeDamage(10);
    Vera.beRepaired(5);
    std::cout << std::endl;

    std::cout << YELLOW << "Testing ScavTrap" << RESET << std::endl;
    ScavTrap Pavel("Pavel");
    Pavel.attack("Manya");
    Pavel.guardGate();
    Pavel.takeDamage(15);
    Pavel.beRepaired(15);
    std::cout << std::endl;

    std::cout << YELLOW << "Testing FragTrap" << RESET << std::endl;
    FragTrap Foma("Foma");
    Foma.attack("Pavel");
    Foma.takeDamage(15);
    Foma.beRepaired(15);
    Foma.highFivesGuys();
    std::cout << std::endl;

    std::cout << YELLOW << "Testing DiamondTrap" << RESET << std::endl;
    DiamondTrap diamondDefault;
	std::cout << "diamondDefault has now name '" 	<< diamondDefault.getName() << "'." << std::endl;
	std::cout << "diamondDefault has now " 			<< diamondDefault.getHitPoints() << " hit points." << std::endl;
	std::cout << "diamondDefault has now " 			<< diamondDefault.getEnergyPoints() << " energy points." << std::endl;
	std::cout << "diamondDefault may now cause "	<< diamondDefault.getAttackDamage() << " attack demage." << std::endl;
	DiamondTrap Mania("Mania");
	std::cout << "Mania has now name '"		<< Mania.getName() << "'." << std::endl;
	std::cout << "Mania has now "			<< Mania.getHitPoints() << " hit points." << std::endl;
	std::cout << "Mania has now "			<< Mania.getEnergyPoints() << " energy points." << std::endl;
	std::cout << "Mania may now cause "		<< Mania.getAttackDamage() << " attack demage." << std::endl;
	Mania = diamondDefault;
	std::cout << "Mania has now name '" 	<< Mania.getName() << "'." << std::endl;
	std::cout << "Mania has now " 		<< Mania.getHitPoints() << " hit points." << std::endl;
	std::cout << "Mania has now " 		<< Mania.getEnergyPoints() << " energy points." << std::endl;
	std::cout << "Mania may now cause "	<< Mania.getAttackDamage() << " attack demage." << std::endl;
    // std::cout << GREEN << "Fragtrap hit points: " << BLUE << "100" << RESET << std::endl;
    // std::cout << GREEN << "Scavtrap energy points: " << BLUE << "50" << RESET << std::endl;
    // std::cout << GREEN << "Fragtrap attack damage: " << BLUE << "30" << RESET << std::endl;
    // std::cout << GREEN << "Mania's hit points: " << BLUE << Mania.getHitPoints() << RESET << std::endl;
    // std::cout << GREEN << "Mania's energy points: " << BLUE << Mania.getEnergyPoints() << RESET << std::endl;
    // std::cout << GREEN << "Mania's attack damage: " << BLUE << Mania.getAttackDamage() << RESET << std::endl;
    Mania.attack("Pavel");
    Mania.takeDamage(15);
    Mania.beRepaired(15);
    Mania.whoAmI();
    Mania.guardGate();
    Mania.highFivesGuys();
    Mania.attack("Foma");

    std::cout << std::endl;

	return (0);
}