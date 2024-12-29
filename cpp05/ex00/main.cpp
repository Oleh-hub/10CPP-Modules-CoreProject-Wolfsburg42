#include "Bureaucrat.hpp"

int main()
{
	try
	{
		/* do some stuff with bureaucrats */
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
		
		Bureaucrat fedia("Fedia", 100);
		std::cout << RED "fedia: " RESET << fedia << std::endl;
		Bureaucrat fedia2("Fedia2", -1);
		std::cout << fedia2 << std::endl;
	}
	catch(std::exception & err)
	{
		/* handle exception */
		std::cerr << err.what() << std::endl;
	}
	
}