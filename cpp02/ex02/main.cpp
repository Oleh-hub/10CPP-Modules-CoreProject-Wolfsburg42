#include "Fixed.hpp"

#include <iostream>

/* int main( void ) 
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	

	// std::cout << "TEST" << std::endl;
	a = Fixed( 1234.4321f );
	
	std::cout << "a is " << a << std::endl; // next to uncomment
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	
	return 0;
} */



int main( void ) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	
	return 0;
}

/* int main() {
	Fixed a(3.5f);
	Fixed b(2.5f);

	// comparison operators
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << a << " >  " << b << " : " << (a > b ? "True" : "False") << std::endl;
	std::cout << a << " <  " << b << " : " << (a < b ? "True" : "False") << std::endl;
	std::cout << a << " >= " << b << " : " << (a >= b ? "True" : "False") << std::endl;
	std::cout << a << " <= " << b << " : " << (a <= b ? "True" : "False") << std::endl;
	std::cout << a << " == " << b << " : " << (a == b ? "True" : "False") << std::endl;
	std::cout << a << " != " << b << " : " << (a != b ? "True" : "False") << std::endl;
	std::cout << std::endl;

	// Arithmetic operators
	Fixed c = a + b;
	std::cout << "a + b = " << a << " + " << b << " = " << c << std::endl;
	Fixed d = a - b;
	std::cout << "a - b = " << d << std::endl;
	Fixed e = a * b;
	std::cout << "a * b = " << e << std::endl;
	Fixed f = a / b;
	std::cout << "a / b = " << f << std::endl;
	std::cout << std::endl;

	// Increment/decrement operators
	Fixed g = ++a; // Pre-increment
	std::cout << "++a = " << g << std::endl;
	Fixed h = a++; // Post-increment
	std::cout << "a++ = " << h << std::endl;
	Fixed i = --b; // Pre-decrement
	std::cout << "--b = " << i << std::endl;
	Fixed j = b--; // Post-decrement
	std::cout << "b-- = " << j << std::endl;

	// Min and Max
	Fixed k_min = k_min.min(a, b); 	//call of min()/max() as non static
	k_min = Fixed::min(a, b);		//call of min()/max() as static
	std::cout << "min(" << a << ", " << b << ") = " << k_min << std::endl;
	Fixed k_max = k_max.max(a, b);
	std::cout << "max(" << a << ", " << b << ") = " << k_max << std::endl;
	return 0;
} */