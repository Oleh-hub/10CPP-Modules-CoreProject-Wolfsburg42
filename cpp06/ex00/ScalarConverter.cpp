
#include "ScalarConverter.hpp"

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter & ScalarConverter::operator=(ScalarConverter &rhs)
{
	(void) rhs;
	return *this;
}

void ScalarConverter::convert(const std::string &rhs)
{
	std::cout << rhs << std::endl;
}