#include <iostream>
#include "Simple.class.hpp"

Simple::Simple(void) {
	
	std::cout << "Constructor is called" << std::endl;
	return;
}

Simple::~Simple(void) {

	std::cout << "Destractor is called" << std::endl;
	return;
}