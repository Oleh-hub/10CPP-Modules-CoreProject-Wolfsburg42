/* 240907
npointers to members*/

#include <iostream>
#include "Sample.Class.hpp"

int main(void) {
	
	Sample instance;
	Sample * instancep = &instance;


	int Sample::*p = NULL;
	p = &Sample::foo;


	std::cout << "Value of member foo: " << instance.foo << std::endl;
	std::cout << "instancep = " << instancep << std::endl;
	std::cout << "int Sample::*p = " << p << std::endl;
	// std::cout << "instance = " << instance << std::endl;
	return 0;
}