/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:41:42 by oruban            #+#    #+#             */
/*   Updated: 2024/09/04 19:35:58 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/************************************************/
/*					CONSTRUCTORS				*/
/************************************************/
Weapon::Weapon(const std::string &type) : _type(type){
	// std::cout << BLUE << "Weapon " << _type << " started its existence." << DEF_COLOR << std::endl;
}
/************************************************/
/*					DISRUCTOR					*/
/************************************************/
Weapon::~Weapon() {
	// std::cout << BLUE << "Weapon " << _type << " stopped its existence." << DEF_COLOR << std::endl;
}
/************************************************/
/*					PUBLIC						*/
/************************************************/
//getter
const std::string &Weapon::getType(void) const {
	// std::string type = Weapon::_type;
	return (_type);
}

//setter
void Weapon::setType(const std::string &newType) {
	// std::cout << BLUE << "Weapon " << _type << " changed to ";
	_type = newType;
	// std::cout << "Weapon " << _type << DEF_COLOR << std::endl;
}