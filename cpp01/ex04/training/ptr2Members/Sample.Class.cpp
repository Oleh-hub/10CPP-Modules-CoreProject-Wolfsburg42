#include <iostream>
#include "Sample.Class.hpp"

Sample::Sample(void) : foo(0) {
	std::cout << "Constructor called" << std::endl;
	
	return;
}

Sample::~Sample(void) {
	std::cout << "Destructor called" << std::endl;

	return;
}

void Sample::bar(void) const {
	std::cout << "Member function bar() is called" << std::endl;

	return;
}
