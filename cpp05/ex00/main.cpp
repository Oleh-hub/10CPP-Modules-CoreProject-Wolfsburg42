#include "Bureaucrat.hpp"

int main()
{
	try
	{
		/* do some stuff with bureaucrats */
		Bureaucrat sasha;
		std::cout << sasha << std::endl;
		Bureaucrat vasia("Vasia", 151);
		std::cout << vasia << std::endl;
		Bureaucrat sasha2 = sasha;
		std::cout << sasha2 << std::endl;
	}
	catch(std::exception & e)
	{
		/* handle exception */
	}
}