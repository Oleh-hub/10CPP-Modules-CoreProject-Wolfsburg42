#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
// #include "ICharacter.hpp"
#include "Character.hpp"
#include "colors.hpp"

void printHeader(const std::string &string, const std::string &color)
{
	size_t offset_end = (78 - string.length()) / 2;
	size_t offset_start = offset_end + string.length() % 2;

	std::cout << color;
	for (size_t i = 0; i < 80; i++)
		std::cout << "*";
	std::cout << std::endl;
	std::cout << "*";
	for (size_t i = 0; i < offset_start; i++)
		std::cout << " ";
	std::cout << string;
	for (size_t i = 0; i < offset_end; i++)
		std::cout << " ";
	std::cout << "*" << std::endl;
	for (size_t i = 0; i < 80; i++)
		std::cout << "*";
	std::cout << std::endl;
	std::cout << RESET;
}

void testAMateria()
{
	printHeader("AMateria canonical form b4 turing the class AMateria into an absturct", BLUE);
	// AMateria a;
	// AMateria b("bMateria");
	// AMateria c(b);
	// std::cout << " c = " << c.getType() << std::endl;
	// c = a;
	// std::cout << " c = " << c.getType() << std::endl;
}

void testIce()
{
	printHeader("Ice canonical form b4 turing the class Ice", BLUE);
	Ice a;
	std::cout << a.getType() << " " << &a << std::endl;
	Ice b(a);
	std::cout << b.getType() << " " << &b << std::endl;
	a = b;
	AMateria *c = new Ice();
	std::cout << c->getType() << " " << c << std::endl;
	delete c; // calls ~Ice() because of 'virtual ~AMateria()'
}

void test_learncreateMateria()
{
	printHeader("Testing classes IMateriaSource and AMateria", GREEN);
	IMateriaSource* src = new MateriaSource();
	for (int i = 0; i < 5; i++)
		src->learnMateria(new Ice());
	AMateria* tmp;
	tmp = src->createMateria("ice");
	std::cout << GREEN << tmp->getType() << RESET << std::endl;
	delete src;
	delete tmp;
}

int main()
{
	testAMateria();
	// testIce();
	// test_learncreateMateria();

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	// me->equip(tmp);
	// ICharacter* bob = new Character("bob");
	// me->use(0, *bob);
	// me->use(1, *bob);
	// delete bob;
	delete tmp; // 22.12
	delete me;
	delete src;
	return 0;
}
