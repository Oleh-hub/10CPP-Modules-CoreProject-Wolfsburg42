// * shoots an ice bolt at <name> *
#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"
# include <iostream>

class Ice : public AMateria
{
	public:
		Ice();
		virtual AMateria* clone() const;
		~Ice();
};

#endif // ICE_HPP