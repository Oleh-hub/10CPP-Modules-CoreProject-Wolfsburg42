/* virtural methods are being used at the stage of exectution and NOT linkage as other methods */
#include <string>
#include <iostream>

class Character
{
	public:
		// void sayHello(std::string const &target);
		virtual void sayHello(std::string const &target); // virtual makes class Character to act as a Warrior
};

class Warrior : public Character
{
	public:
		// void sayHello(std::string const &target);
		virtual void sayHello(std::string const &target); // virtual makes class Character to act as a Warrior
};

void Character::sayHello(std::string const &target)
{
	std::cout << "Hello " << target << " !" << std::endl;
}

void Warrior::sayHello(std::string const &target)
{
	std::cout << "F*** off " << target << ", I do not like  you !" << std::endl;
}

int main()
{
	// this is ok because Warrior is a Warrior
	Warrior *a = new Warrior();
	
	// this is ok because Warrior is a Character
	Character *b = new Warrior();

	a->sayHello("students");
	b->sayHello("students");
	return 0;
}