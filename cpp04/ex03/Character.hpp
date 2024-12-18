#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>
class Character : ICharacter
{
	private:
        std::string _name;
        AMateria *_inventory[4];
    public:
		~Character();
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, Character& target);

        Character();
};

#endif // CHARACTER_HPP