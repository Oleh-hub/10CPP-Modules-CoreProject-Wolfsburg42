/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:41:42 by oruban            #+#    #+#             */
/*   Updated: 2024/09/02 20:35:09 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/************************************************/
/*					CONSTRUCTORS				*/
/************************************************/
Weapon::Weapon(const std::string &type) : type(type){
	std::cout << "Weapon " << type << " started its existence." << std::endl;
}
/************************************************/
/*					DISRUCTOR					*/
/************************************************/
Weapon::~Weapon() {
	std::cout << "Weapon " << type << " stopped its existence." << std::endl;
}
/************************************************/
/*					PUBLIC						*/
/************************************************/
//getter
const std::string &Weapon::getType(void) const {
	return (type);
}

//setter
void Weapon::setType(const std::string &newType) {
	std::cout << "Weapon " << type << " changed to ";
	type = newType;
	std::cout << "Weapon " << type << std::endl;
}