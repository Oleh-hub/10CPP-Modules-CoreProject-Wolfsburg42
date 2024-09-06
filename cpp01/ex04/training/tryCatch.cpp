/* 240906 roi
how the try - catch block works */

#include <iostream>
#include <string>
#include <fstream>

int main() {
	// setlocale(LC_ALL, "ru"); //? did not make any "ru"
	std::ifstream fin;
	std::string path = "tryCatch.txt";
	
	fin.exceptions(std::ifstream::badbit | std::ifstream::failbit); // because ifstream is exception. is not nessesary for other entities of standard library
    try {
		std::cout << "Trying to open the file " << path << " by roi" << std::endl;
		fin.open(path);
		std::cout << "The file was successfully opened by roi" << std::endl;
	} 
	// catch (std::exception& ex) 
	catch (std::ifstream::failure & ex) 
	{
		std::cout << ex.what() << std::endl;
		std::cout << ex.code() << std::endl;  //part of 'std::ifstream::failure'
		std::cout << "Error during opening the file by roi" << std::endl;
	}

    return 0;
}