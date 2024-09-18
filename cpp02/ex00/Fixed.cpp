/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:35:55 by oruban            #+#    #+#             */
/*   Updated: 2024/09/18 11:21:38 by oruban           ###   ########.fr       */
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
	std::cout << "getRawBits member function called " << this << std::endl;
	return number;
 }

/*   member function void setRawBits( int const raw );
that sets the raw value of the fixed-point number. */
void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called " << this << std::endl; // is not nessesary line accoring to the subject - "Copy assignment operator called"
	number = raw;	
}

// A copy assignment operator overload.
Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called " << this << std::endl;
	if(this == &other)
		return *this;
	this->number = other.getRawBits();
	return *this;
}


 
 // A default constructor that initializes the fixed-point number value to 0
Fixed::Fixed() : number (0)
{
	std::cout << "Default constructor called " << this << std::endl;
}

// A copy constructor.
Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called " << this << std::endl;
	number = other.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called " << this << std::endl;
}
