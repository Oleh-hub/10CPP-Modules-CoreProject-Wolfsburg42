#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {
private:
	std::string name;
	const Weapon &weapon;
public:
	HumanA(std::string name, const Weapon &weapon);
	~HumanA();
	void attack(void);

};

#endif // HUMANA_HPP