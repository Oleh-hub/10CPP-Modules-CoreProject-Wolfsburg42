#include <iostream>
#include "Sample.Class.hpp"

Sample::Sample(void) {
	std::cout << "Constructor called" << std::endl;
	Sample::_nbInst += 1; // Non member atribute/variable  (because it's static)
	// this->_nbInst += 1;

	return;
}

Sample::~Sample(void) {
	std::cout << "Destructor called" << std::endl;
	Sample::_nbInst -= 1; // Non member atribute/variable (because it's static)
	// this->_nbInst -= 1;

	return;
}

int Sample::getNbInst(void) {
	return Sample::_nbInst; // Non member atribute/variable
	// return this->_nbInst;
}

int Sample::_nbInst = 0; // Non member atribute/variable