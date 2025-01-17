#include "ScalarConverter.hpp"
#include <vector>

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter & ScalarConverter::operator=(ScalarConverter &rhs)
{
	(void) rhs;
	return *this;
}

// findes out in what format was made input (for example: 'a', 1, 1.1f, 1.1 or somthing else.)
ScalarConverter::eScalarType ScalarConverter::getType(const std::string &str)
{
	//Удобство извлечения данных(>>), Обработка ошибок, Пошаговый анализ строки
	std::istringstream iss(str); //  "input string stream" (поток ввода из строки) - makes the work with string easier
	int		b4Dot;					// number from iss b4 dot '.'
	char 	dot;
	int 	afterDot;
	char 	f;

	// std::cout << RED "DEBUG getType(): str = "  << str << "; length() = " << str.length() << RESET << std::endl; // debug
	if (str.length() == 1 && !std::isdigit(str[0]))
		return CHAR;
	if (iss >> b4Dot)
	{
		if (iss.eof())
			return INT;
		iss >> dot;
		if (dot == '.' && iss.peek() != EOF) // peek() возвращает следующий символ в потоке ввода, не извлекая его.
		{
			iss >> afterDot;
			// if (iss.eof())
			if (iss.peek() == EOF)
				return DOUBLE;
			iss >> f;
			if (f == 'f' && iss.peek() == EOF)
				return FLOAT;
		}	
	}
	return INVALID;
}

void ScalarConverter::convert(const std::string &str)
{
	std::cout << "String representation of a C++ literal: " << str << std::endl;
	eScalarType scalarType = getType(str);

	std::cout << scalarType << std::endl;
	switch (scalarType)
	{
		case (CHAR):
			std::cout << "CHAR" << std::endl;
			break;
		case (INT):
			std::cout << "INT" << std::endl;
			break;
		case (FLOAT):
			std::cout << "FLOAT" << std::endl;
			break;
		case (DOUBLE):
			std::cout << "DOUBLE" << std::endl;
			break;
		case (INVALID):
			std::cout << "INVALID" << std::endl;
			break;
	}
}