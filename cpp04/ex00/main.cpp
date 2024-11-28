# include "Animal.hpp"

int main()
{
	std::cout << GREEN "==============Checking Animal class============" RESET << std::endl;
	Animal first;
	Animal second("Crocoziablic");
	Animal third(second);

	std::cout << "Variable second has _type: " RED << second.getType() << RESET << std::endl;
	second = first;
	std::cout << "Variable second has _type: " RED << second.getType() << RESET << std::endl;
	second.makeSound();
/* 	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound(); */
}