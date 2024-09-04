/* Explanation
class HumanA: Uses a reference to Weapon because the Weapon is always provided in the constructor and is guaranteed to exist.
class HumanB: Uses a pointer to Weapon because the Weapon is not provided in the constructor and may not always be present. - roi */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB {
private:
	std::string name;
	Weapon* _weapon; // Use a pointer to allow setting the weapon later
public:
	HumanB(std::string name);
	~HumanB();
	void setWeapon(Weapon &weapon);
	/* void setWeapon(Weapon *weapon); */
	void attack(void) const;
	Weapon* getWeapon(void) const;
};

#endif // HUMANB_HPP