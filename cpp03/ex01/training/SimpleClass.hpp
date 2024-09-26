/*  canonical form
 */

#ifndef SIMPLE_CLASS_HPP
# define SIMPLE_CLASS_HPP

# include <iostream>

class Sample
{
	public:
		Sample();				// default constructor
		Sample(int const n);	// parameterized constructor
		Sample(Sample const &src); // copy constructor
		~Sample();

		Sample &operator= (Sample const &rhs); // assignment operator

		int getFoo() const;

	private:

		int _foo;
};

std::ostream &operator<<(std::ostream & o, Sample const & i); // output stream operator

#endif // SIMPLE_CLASS_HPP