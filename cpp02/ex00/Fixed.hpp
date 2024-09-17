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
		Fixed(); //A default constructor that initializes the fixed-point number value to 0.
		Fixed(const Fixed &other); // A copy constructor.
		Fixed &operator=(const Fixed &other); // A copy assignment operator overload/ Оператор присваивания копированием
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif  // FIXED_HPP