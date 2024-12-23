#ifndef CHARACTER_HPP
# define CHARACTER_HPP
// # include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>
class Character : public ICharacter
{
	private:
        std::string _name;
        AMateria *_inventory[4];
    public:
		virtual ~Character();
		virtual std::string const & getName() const;

		virtual void equip(AMateria* m);
		// virtual void unequip(int idx);
		virtual void use(int idx, Character& target);

        Character();
        Character(const std::string &name);
		Character &operator=(const Character &other);
};

#endif // CHARACTER_HPP