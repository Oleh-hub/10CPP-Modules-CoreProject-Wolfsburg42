#include <iostream>
#include "SampleClass.hpp"

Sample::Sample() : _foo(0)
{
	std::cout << "Default constructor called " << this << std::endl;
	return;
}
Sample::Sample(int const n) : _foo(n)
{
	std::cout << "Parametric constructor called " << this << std::endl;
	return;
}
Sample::Sample(Sample const &src)
{
	std::cout << "Copy constructor called " << this << std::endl;
	*this = src;
	return;
}
Sample::~Sample()
{
	std::cout << "Destructor called " << this << std::endl;
	return;
}
Sample & Sample::operator= (Sample const &rhs)
{
	std::cout << "Assignment operator called " << this << std::endl;
	if (this != &rhs)
		this->_foo = rhs.getFoo();
	return *this;
}
std::ostream &operator<<(std::ostream & o, Sample const & i)
{
	o << i.getFoo();
	return o;
}
int Sample::getFoo() const
{
	return this->_foo;
}