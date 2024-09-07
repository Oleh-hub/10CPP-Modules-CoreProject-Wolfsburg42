/* 240907
non member attributes and non member functions */

#include <iostream>
#include "Sample.Class.hpp"

void f0(void){
	Sample instance;
	std::cout << "Number of instanses: " << Sample::getNbInst() << std::endl;
}

void f1(void) {
	Sample instance;

	std::cout << "Number of instanses: " << Sample::getNbInst() << std::endl;
	f0();
	return;
}


int main(void) {
	
	std::cout << "Number of instanses: " << Sample::getNbInst() << std::endl;
	f1();
	std::cout << "Number of instanses: " << Sample::getNbInst() << std::endl;
	return 0;
}