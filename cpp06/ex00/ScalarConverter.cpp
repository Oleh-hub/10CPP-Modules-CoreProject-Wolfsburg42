#include "ScalarConverter.hpp"
#include <vector>

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter & ScalarConverter::operator=(ScalarConverter &rhs)
{
	(void) rhs;
	return *this;
}

ScalarConverter::eScalarType ScalarConverter::getType(const std::string &str)
{
	//Удобство извлечения данных(>>), Обработка ошибок, Пошаговый анализ строки
	std::istringstream iss(str); //  "input string stream" (поток ввода из строки) - makes the work with string easier
	int b4Dot;					// number from iss b4 dot '.'
	char dot;

	std::cout << RED "DEBUG getType(): str = "  << str << "; length() = " << str.length() << RESET << std::endl;
	if (str.length() == 1 && !std::isdigit(str[0]))
		return CHAR;
	
	if (iss >> b4Dot)
	{
		std::cout << BLUE << b4Dot << RESET << std::endl;
		if (iss.eof())
			return INT;

		// if ()

	}
	return INVALID;
}

void ScalarConverter::convert(const std::string &str)
{
	std::cout << "String representation of a C++ literal: " << str << std::endl;
	eScalarType scalarType = getType(str);
	(void) scalarType;

	// eScalarType scalarType1[] = {CHAR, INT, FLOAT, DOUBLE, INVALID};
	for (int i = 0; i < 5; i++)
	{
		// eScalarType scalarType = type[i];
		{
			switch (scalarType)
			{
				case (CHAR):
					std::cout << scalarType << std::endl;
					break;
				case (INT):
					std::cout << scalarType << std::endl;
					break;
				case (FLOAT):
					std::cout << scalarType << std::endl;
					break;
				case (DOUBLE):
					std::cout << scalarType << std::endl;
					break;
				case (INVALID):
					std::cout << scalarType << std::endl;
					break;
			}
		}
	}
}