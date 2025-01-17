#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <string>
# include <sstream>
# include <cstdio> // EOF
# include "Colors.hpp"

class ScalarConverter
{
	private:
		ScalarConverter(const ScalarConverter & other);
		ScalarConverter &operator=(ScalarConverter &rhs);
		
		enum eScalarType
		{
			CHAR,		// 0
			INT,		// 1
			FLOAT,		// 2
			DOUBLE,		// 3
			INVALID		// 4
		};
		ScalarConverter();
		~ScalarConverter();


	public:
		static void convert(const std::string &rhs);
		static eScalarType getType(const std::string &rhs);
};

#endif // SCALARCONVERTER_HPP