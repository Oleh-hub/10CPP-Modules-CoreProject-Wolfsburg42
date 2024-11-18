/*  roi 240926
canonical form of class should have default constructor, copy constructor and possible assignment operator
 */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

# include <iostream>

class Sample
{
	public:
		Sample();					// default constructor
		Sample(int const n);
		Sample(Sample const &src);	// copy constructor
		~Sample();

		Sample &operator= (Sample const &rhs); // assignment operator

		int getFoo() const;

	private:

		int _foo;
};

std::ostream &operator<<(std::ostream & o, Sample const & i); // output stream operator

#endif // SAMPLE_CLASS_HPP