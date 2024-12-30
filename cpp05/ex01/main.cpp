#include "Bureaucrat.hpp"

int main()
{
	try
	{
		/* do some stuff with bureaucrats */
		std::cout << BLUE "Checking too low in constuctor:" RESET << std::endl;
		Bureaucrat sasha;
		std::cout << RED "sasha: " RESET << sasha << std::endl;
		Bureaucrat sasha2 = sasha;
		std::cout << RED "sasha2: " RESET << sasha2 << std::endl;
		Bureaucrat vasia("Vasia", 151);
		std::cout << vasia << std::endl;
	}
	catch(std::exception & err)
	{
		/* handle exception */
		std::cerr << err.what() << std::endl;
	}

	try
	{
		/* do some stuff with bureaucrats */
		std::cout << BLUE "Checking too high in constuctor:" RESET << std::endl;
		Bureaucrat fedia("Fedia", 1);
		std::cout << RED "fedia: " RESET << fedia << std::endl;
		Bureaucrat fedia2("Fedia2", -1);
		std::cout << fedia2 << std::endl;
	}
	catch(std::exception & err)
	{
		/* handle exception */
		std::cerr << err.what() << std::endl;
	}
	
	try
	{
		/* do some stuff with bureaucrats */
		std::cout << GREEN "Checking too high/low in in incGrade() / decGrade():" RESET << std::endl;
		Bureaucrat kolia2("Kolia2", 150);
		kolia2.incGrade();
		std::cout << RED "kolia2 after decGrade(): " RESET << kolia2 << std::endl;
		std::cout << RED "kolia2: " RESET << kolia2 << std::endl;
		kolia2.decGrade();
		std::cout << RED "kolia2: " RESET << kolia2 << std::endl;
		kolia2.decGrade();
		std::cout << RED "kolia2 after incGrade(): " RESET << kolia2 << std::endl;
		std::cout << kolia2 << std::endl; // should not be executed
	}
	catch(std::exception & err)
	{
		/* handle exception */
		std::cerr << err.what() << std::endl;
	}
	
		try
	{
		/* do some stuff with bureaucrats */
		std::cout << GREEN "Checking too high/low in in decGrade() / incGrade():" RESET << std::endl;
		Bureaucrat kolia("Kolia", 1);
		std::cout << RED "kolia: " RESET << kolia << std::endl;
		kolia.decGrade();
		std::cout << RED "kolia after decGrade(): " RESET << kolia << std::endl;
		kolia.incGrade();
		std::cout << RED "kolia after incGrade(): " RESET << kolia << std::endl;
		kolia.incGrade();
		std::cout << RED "kolia after incGrade(): " RESET << kolia << std::endl;
		std::cout << kolia << std::endl; // should not be executed
	}
	catch(std::exception & err)
	{
		/* handle exception */
		std::cerr << err.what() << std::endl;
	}
}