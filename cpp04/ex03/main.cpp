#include "AMateria.hpp"
#include "colors.hpp"

void printHeader(const std::string &string, const std::string &color) {
	size_t offset_end = (78 - string.length()) / 2;
	size_t offset_start = offset_end + string.length() % 2;

	std::cout << color;
	for (size_t i = 0; i < 80; i++) {
		std::cout << "*";
	}
	std::cout << std::endl;
	std::cout << "*";
	for (size_t i = 0; i < offset_start; i++) {
		std::cout << " ";
	}
	std::cout << string;
	for (size_t i = 0; i < offset_end; i++) {
		std::cout << " ";
	}
	std::cout << "*" << std::endl;
	for (size_t i = 0; i < 80; i++) {
		std::cout << "*";
	}
	std::cout << std::endl;
	std::cout << RESET;
}

int main()
{
	{
		printHeader("AMateria canonical form b4 turing the class AMateria into an absturct", BLUE);
		AMateria a;
		AMateria b("bMateria");
		AMateria c(b);
		c = a;
	}
	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	// ICharacter* me = new Character("me");
	// AMateria* tmp;
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	// ICharacter* bob = new Character("bob");
	// me->use(0, *bob);
	// me->use(1, *bob);
	// delete bob;
	// delete me;
	// delete src;
	// return 0;
}