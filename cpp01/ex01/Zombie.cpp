#include "Zombie.hpp"

/************************************************/
/*					CONSTRUCTORS				*/
/************************************************/
Zombie::Zombie() {
}
// Zombie::Zombie(std::string public_name) : name(public_name) {
// }
/************************************************/
/*					DISRUCTOR					*/
/************************************************/
Zombie::~Zombie() {
	std::cout << "Zombie " << name << " stopped its existence." << std::endl;
}
/************************************************/
/*					PUBLIC						*/
/************************************************/
void Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// sets the name of the zombie in case of default constructor usage.
void Zombie::setName(std::string public_name) {
	name = public_name;
}
