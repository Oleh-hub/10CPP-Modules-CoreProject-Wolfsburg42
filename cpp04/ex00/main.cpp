// #include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

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
	std::cout<< std::endl << GREEN "==============Checking Dog class============" RESET << std::endl;

	Dog forth;
	Dog fifth("Tuzik");
	Dog six(fifth);

	std::cout << "Variable fifth has _type: " RED << fifth.getType() << RESET << std::endl;
	fifth = forth;
	std::cout << "Variable fifth has _type: " RED << fifth.getType() << RESET << std::endl;
	fifth.makeSound();
	Animal *fifth_p = &fifth;
	fifth_p->makeSound();
	std::cout<< std::endl << GREEN "==============Checking WrongCat class============" RESET << std::endl;

	WrongCat seven;
	WrongCat eight("WrongVaska");
	WrongCat nine(seven);

	std::cout << "Variable eight has _type: " RED << eight.getType() << RESET << std::endl;
	eight = nine;
	std::cout << "Variable eight has _type: " RED << eight.getType() << RESET << std::endl;
	eight.makeSound();
	WrongAnimal *eight_p = &eight;
	eight_p->makeSound();
	std::cout<< std::endl << GREEN "==============Subject test:============" RESET << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
}