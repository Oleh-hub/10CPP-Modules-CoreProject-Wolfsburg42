#include <iostream>
#include <string>
#include <fstream>

/* threatment of exclusions with 'try' 'catch' */
int main(int argc, char **argv) {
	
	// std::ifstream fin;
	// fin.exceptions(std::ifstream::badbit | std::ifstream::failbit);
	try {

	} catch (std::exception & ex) {
		std::cout << "Failure " << ex.what() << "happend during roi code execution" << std::endl;
	}

	return 0;
}