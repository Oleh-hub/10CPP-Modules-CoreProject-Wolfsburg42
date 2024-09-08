/* 240907-8
npointers to members*/

#include <iostream>
#include "Sample.Class.hpp"

int main(void) {
	
	Sample instance;
	Sample * instancep = &instance;


	// int Sample::*p = NULL;
	int Sample::*p;
	p = NULL;
	void (Sample::*f)(void) const;

	p = &Sample::foo;
	f = &Sample::bar;

	std::cout << "instancep == " << instancep << std::endl;
	std::cout << "int Sample::*p == " << p << std::endl;
	std::cout << "void (Sample::*f)(void) const == " << f << std::endl;
	std::cout << std::endl;

	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instance.*p = 21;
	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instancep->*p = 42;
	std::cout << "Value of member foo: " << instance.foo << std::endl;

	(instance.*f)();
	(instancep->*f)();
	return 0;
}