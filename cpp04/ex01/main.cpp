// #include "Cat.hpp"
#include "Brain.hpp"
#include "colors.hpp"

int main()
{
	std::cout << "Brain's ideas: " << std::endl;
	std::cout << "============================" << std::endl;
	Brain iAmBrain;
	std::cout << "var " << BLUE << "iAmBrain " << RESET << &iAmBrain << std::endl;
	for (int i = 0; i < 2; i++)
		std::cout << iAmBrain.getIdea(i) << std::endl;
	std::cout << "============================" << std::endl;
	Brain third(iAmBrain);
	std::cout << "var " << BLUE << "third " << RESET << &third << std::endl;
	for (int i = 0; i < 2; i++)
		std::cout << third.getIdea(i) << std::endl;
	std::cout << "============================" << std::endl;
	Brain second = iAmBrain;
	std::cout << "var " << BLUE << "second " << RESET << &second << std::endl;
	for (int i = 0; i < 2; i++)
		std::cout << second.getIdea(i) << std::endl;
	std::cout << "============================" << std::endl;
	// Cat vaska;
	// std::cout << RED << vaska.getType() << RESET " " << std::endl;
}