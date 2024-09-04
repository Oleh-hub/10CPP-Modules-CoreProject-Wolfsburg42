/* Explanation
class HumanA: Uses a reference to Weapon because the Weapon is always provided in the constructor and is guaranteed to exist.
class HumanB: Uses a pointer to Weapon because the Weapon is not provided in the constructor and may not always be present. - roi*/

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA {
private:
	std::string name;
	Weapon &weapon;
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void attack(void) const;
};

#endif // HUMANA_HPP