#include <iostream>

class Base {
public:
	virtual void print() {
		std::cout << "Base" << std::endl;
	}
};

class Derived : public Base {
public:
	// void print() override {
	void print()  {
		std::cout << "Derived" << std::endl;
	}
};

/* int main() {
	Base* basePtr = new Derived();
	basePtr->print();  // Outputs "Derived"
	delete basePtr;
	return 0;
} */
int main() {
	char	buff[512];

	std::cout << "Hi!" << std::endl << "Enter somthing: ";
	std::cin >> buff;
	std::cout << buff << " is entered" << std::endl;
}