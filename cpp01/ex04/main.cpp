#include <iostream>
#include <string>
#include <fstream>

/* threatment of exclusions with 'try' 'catch' */
int main(int argc, char **argv) {
	
	// std::ifstream fin;
	// fin.exceptions(std::ifstream::badbit | std::ifstream::failbit);
	try {
		if (argc != 4){
			std::cout << "Usage: ./sed4Losers <filename> <s1> <s2>" << std::endl;
		}
	} catch (std::exception & ex) {
		std::cout << "Failure " << ex.what() << "happend during roi code execution" << std::endl;
	}

	return 0;
}