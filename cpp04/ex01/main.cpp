#include "Cat.hpp"
// #include "Brain.hpp"

int main()
{
	Brain iAmBrain;
	// Brain heIsBrain(iAmBrain);

	std::cout << "Brain's ideas: " << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << iAmBrain.getIdea(i) << std::endl;
	// Cat vaska;
	// std::cout << RED << vaska.getType() << RESET " " << std::endl;
}