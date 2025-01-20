#include "ScalarConverter.hpp"

int main(int an, char **ac)
{
	if (an != 2)
	{
		std::cout << "Error: only ONE argument is allowed" << std::endl;
		return 1;
	}
	ScalarConverter::convert(ac[1]);
}
