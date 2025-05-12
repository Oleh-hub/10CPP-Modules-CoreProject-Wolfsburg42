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
			if (iss >> afterDot)
			{
				// if (iss.eof())
				if (iss.peek() == EOF)
				return DOUBLE;
				iss >> f;
				if (f == 'f' && iss.peek() == EOF)
				return FLOAT;
			}
		}	
	}
	return INVALID;
}

void ScalarConverter::printImpossible()
{
	std::cout << "char:	impossible" << std::endl;
	std::cout << "int:	impossible" << std::endl;
	std::cout << "float:	impossible" << std::endl;
	std::cout << "double:	impossible" << std::endl;
}

void ScalarConverter::convertChar(const std::string &str)
{
	std::istringstream iss(str); // апуск конструктора класса istringsrream которым инициируется iss значением строки str
	char c;
	
	if (iss >> c)
	{
		if (isprint(c))
		{
			std::cout << "char:  '" << str << "'" << std::endl;
			std::cout << "int:    " << static_cast<int> (c) << std::endl; 
			std::cout << "float:  " << static_cast<float> (c)<< ".0f" << std::endl;
			std::cout << "double: "	<< static_cast<double> (c)<< ".0" << std::endl;
		}
	}
	else
		printImpossible();
}

void ScalarConverter::convertInvalid(const std::string &str)
{
	std::cout << "char:	impossible" << std::endl;
	std::cout << "int:	impossible" << std::endl;
	if ( str == "nan" || str == "nanf")
	{
		std::cout << "float:  nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else	
		if (str == "-inf" || str == "-inff")
		{
			std::cout << "float:  -inff" << std::endl;
			std::cout << "double: -inf" << std::endl;
		}
		else 
			if (str == "+inf" || str == "+inff")
			{
				std::cout << "float:  +inff" << std::endl;
				std::cout << "double: +inf" << std::endl;
			}
}

void ScalarConverter::convert(const std::string &str)
{
	std::cout << "String representation of a C++ literal: " << str << std::endl;
	eScalarType scalarType = getType(str);

	std::cout << "DEBUG: " << scalarType << std::endl;
	switch (scalarType)
	{
		case (CHAR):
			std::cout << "CHAR" << std::endl;
			convertChar(str);
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
			std::cout << "DEBUG: INVALID" << std::endl;
			convertInvalid(str);
			break;
		}
}
