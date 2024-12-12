#include "Cat.hpp"
// #include "Brain.hpp"

int main()
{
	Brain iAmBrain;
	// Brain heIsBrain(iAmBrain);

	std::cout << "Brain's ideas: " << std::endl;
	for (int i = 0; i < 2; i++)
		std::cout << iAmBrain.getIdea(i) << std::endl;
	Brain assigned = iAmBrain;
	for (int i = 0; i < 2; i++)
		std::cout << assigned.getIdea(i) << std::endl;
	// Cat vaska;
	// std::cout << RED << vaska.getType() << RESET " " << std::endl;
}