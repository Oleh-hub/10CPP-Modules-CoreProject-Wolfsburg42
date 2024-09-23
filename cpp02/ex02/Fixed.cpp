/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:35:55 by oruban            #+#    #+#             */
/*   Updated: 2024/09/23 20:33:55 by oruban           ###   ########.fr       */
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

//=====================ex02=====================
// comparison operators
bool Fixed::operator>(const Fixed &other) const
{
	return (this->getRawBits() > other.getRawBits());
}
bool Fixed::operator<(const Fixed &other) const
{
	return (this->getRawBits() < other.getRawBits());
}
bool Fixed::operator>=(const Fixed &other) const
{
	return (this->getRawBits() >= other.getRawBits());
}
bool Fixed::operator<=(const Fixed &other) const
{
	return (this->getRawBits() <= other.getRawBits());
}
bool Fixed::operator==(const Fixed &other) const
{
	return (this->getRawBits() == other.getRawBits());
}
bool Fixed::operator!=(const Fixed &other) const
{
	return (this->getRawBits() != other.getRawBits());
}
// Arithmetic operators
Fixed Fixed::operator+(const Fixed &other)
{
	return Fixed (this->toFloat() + other.toFloat());
}
Fixed Fixed::operator-(const Fixed &other)
{
		return Fixed (this->toFloat() - other.toFloat());
}
Fixed Fixed::operator*(const Fixed &other)
{
	return Fixed (this->toFloat() * other.toFloat());
}
Fixed Fixed::operator/(const Fixed &other)
{
	return Fixed (this->toFloat() / other.toFloat());
}
// Increment/decrement operators
// ----------------------------------------
/* В контексте чисел с фиксированной запятой, инкремент и декремендействительно увеличивают или уменьшают внутреннее представление числна 1. That is = 0.00390625  */
/* Fixed &Fixed::operator++(void) // prefix increment
{

}
Fixed Fixed::operator++(int) // postfix increment
{
	
}
Fixed &Fixed::operator--(void) // prefix decrement
{
	
}
Fixed Fixed::operator--(int) // postfix decrement
{
	
} */
// Add these four public overloaded member functions to your class:
// --------------------------------
// A static member function min that takes as parameters two references on fixed-point numbers, and returns reference to the smallest one.
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b) ? a : b;
}
Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a < b) ? a : b;
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b) ? a : b;
}
Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a > b) ? a : b;
}