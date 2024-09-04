/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 10:34:54 by oruban            #+#    #+#             */
/*   Updated: 2024/09/04 16:57:36 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : name(name), _weapon(NULL) {
}

HumanB::~HumanB() {
}

void HumanB::setWeapon (Weapon &weapon) {
	
	this->_weapon = &weapon;
	std::cout << GREEN << "HumanB::_weapon = " << this->_weapon << DEF_COLOR << std::endl; //debug
	std::cout << GREEN << "_weapon->getType() = " << _weapon->getType() << DEF_COLOR << std::endl; //debug
	std::cout << GREEN << "The weapon HumanB is now armed with is " << _weapon->getType() << DEF_COLOR << std::endl; //debug
	
}

void HumanB::attack(void) const {
	if (_weapon == NULL) {
		std::cout << RED << name  << " attacks with their bare arms" << DEF_COLOR << std::endl;
	}
	else {
		std::cout << name << " attacks with their " << _weapon->getType()  << std::endl;
	}
}