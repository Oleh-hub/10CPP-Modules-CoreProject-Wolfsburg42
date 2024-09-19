// https://www.h-schmidt.net/FloatConverter/IEEE754.html
#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

// a class in Orthodox Canonical Form that represents a fixed-point number:
class Fixed
{
	private:
		int number; //An integer to store the fixed-point number value.
		static const int fractional_bits = 8;
	public:
		Fixed(); // A default constructor that initializes the fixed-point number value to 0.
		Fixed(const Fixed &other);	// A copy constructor.
		Fixed(const int number);	// constructor that takes a constant integer as a parameter and converts it to the fixed-point value.
		Fixed &operator=(const Fixed &other); // A copy assignment operator overload/ Оператор присваивания копированием
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		
		int toInt( void ) const;	// A member function that converts the fixed-point value to an integer value 8.
};
		std::ostream &operator<<(std::ostream &out, const Fixed &other); // An overload of the insertion («) operator that inserts a floating-point representation of the fixed-point number into the output stream object passed as parameter.

#endif  // FIXED_HPP