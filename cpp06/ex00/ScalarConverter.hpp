#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <string>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter & other);
		ScalarConverter &operator=(ScalarConverter &rhs);
		~ScalarConverter();
	public:
		static void convert(const std::string &rhs);
};

#endif // SCALARCONVERTER_HPP