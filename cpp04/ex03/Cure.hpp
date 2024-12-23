// * heals <name>’s wounds *
#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"
# include <iostream>

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure &other);
		Cure &operator=(const Cure &other);
		~Cure();
		virtual AMateria* clone() const;
		void use(ICharacter &target);
};

#endif // CURE_HPP