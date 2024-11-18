#include <string>
#include <iostream>

class ACharacter
{
	private:
		std::string _name;
	public:
		virtual void attack(std::string const & target) = 0;
		void sayHello(std::string const & target);
};

class Warrior : public ACharacter
{
	public:
		virtual void attack(std::string const & target);
};

void ACharacter::sayHello(std::string const & target)
{
	std::cout << "Hello " << target << " !" << std::endl;
}

void Warrior::attack(std::string const & target)
{
	std::cout << "*attacks " << target << " with a sword*" << std::endl;
}

class ICofeeMaker
{
	public:
		virtual void fillWaterTank(IWaterSource * src) = 0;
		virtual ICofee * makeCofee(std::string const & type) = 0;
};

int main()
{
	ACharacter *a = new Warrior();

	a->sayHello("rodger");
	a->attack("the dragon");
	// b->attack("the dragon");
	return 0;
}