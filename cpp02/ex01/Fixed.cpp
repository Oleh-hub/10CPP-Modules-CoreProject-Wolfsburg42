/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:35:55 by oruban            #+#    #+#             */
/*   Updated: 2024/09/22 19:36:54 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* roi
Exercise 00: My First Class in Orthodox Canonical Form. 
Fixed Point Number.
*/
#include "Fixed.hpp"

/*  member function int getRawBits( void ) const;
that returns the raw value of the fixed-point value. */
 int Fixed::getRawBits(void) const
 {
	// std::cout << "getRawBits member function called " << this << std::endl;
	// std::cout << "getRawBits member function called " << std::endl;
	return number;
 }

/*   member function void setRawBits( int const raw );
that sets the raw value of the fixed-point number. */
void Fixed::setRawBits( int const raw )
{
	// std::cout << "setRawBits member function called " << this << std::endl;
	std::cout << "setRawBits member function called " << std::endl; //<< this << std::endl; // is not nessesary line accoring to the subject - "Copy assignment operator called"
	number = raw;	
}

// A copy assignment operator overload.
Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called " << std::endl; // << this << std::endl;
	if(this == &other)
		return *this;
	this->number = other.getRawBits();
	return *this;
}
 
 // A default constructor that initializes the fixed-point number value to 0
Fixed::Fixed() : number (0)
{
	std::cout << "Default constructor called " << std::endl; // << this << std::endl;
}

// A copy constructor, correctd in compare with ex00
Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called " << std::endl; // << this << std::endl;
	// number = other.number;
	*this = other;
}

// constructor that takes a constant integer as a parameter and converts it to the fixed-point value.
Fixed::Fixed(const int number) : number (number << fractional_bits)
{
	std::cout << "Int constructor called " << std::endl; // << this << std::endl;
}

//******************!!!!!!!!!!!!!!!!!!!!!!! */
// A constructor that takes a constant floating-point number as a parameter. It converts it to the corresponding fixed-point value. The fractional bits value is initialized to 8 
Fixed::Fixed(const float number)
// Fixed::Fixed(const float number) : number (static_cast<int> (roundf(number * (1 << fractional_bits))))
{
	std::cout << "Float constructor called " << std::endl;
	this->number = static_cast<int> (roundf(number * (1 << fractional_bits)));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called " << std::endl; // << this << std::endl;
}

// A member function that converts the fixed-point value to an integer value.
int Fixed::toInt( void ) const
{
	return number >> fractional_bits;
}

//A member function that converts the fixed-point value to a floating-point value.
float Fixed::toFloat( void ) const 
{
	return static_cast<float>(number) / (1 << fractional_bits);
}

// An overload of the insertion («) operator that inserts a floating-point representation of the fixed-point number into the output stream object passed as parameter.
std::ostream &operator<<(std::ostream &out, const Fixed &other)
{
	out << static_cast<float> (other.toFloat());
	return out;
}