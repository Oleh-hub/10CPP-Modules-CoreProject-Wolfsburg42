#include "Zombie.hpp"

/************************************************/
/*					CONSTRUCTOR					*/
/************************************************/
Zombie::Zombie(std::string public_name) : name(public_name) {
}
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

