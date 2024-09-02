/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:36:04 by oruban            #+#    #+#             */
/*   Updated: 2024/09/02 16:58:09 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, const Weapon &weapon) : name(name), weapon(weapon){
}

HumanA::~HumanA(){
}

void HumanA::attack(void){
	std::cout << name << " attacks with their " <<  weapon.getType() << std::endl;
}