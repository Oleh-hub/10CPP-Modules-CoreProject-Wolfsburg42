#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <string>
# include <sstream>
# include "Colors.hpp"

class ScalarConverter
{
	private:
		ScalarConverter(const ScalarConverter & other);
		ScalarConverter &operator=(ScalarConverter &rhs);
		
		enum eScalarType
		{
			CHAR,
			INT,
			FLOAT,
			DOUBLE,
			INVALID
		};
		ScalarConverter();
		~ScalarConverter();


	public:
		static void convert(const std::string &rhs);
		static eScalarType getType(const std::string &rhs);
};

#endif // SCALARCONVERTER_HPP