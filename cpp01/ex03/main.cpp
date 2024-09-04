/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 12:48:40 by oruban            #+#    #+#             */
/*   Updated: 2024/09/04 16:46:34 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Explanation
class HumanA: Uses a reference to Weapon because the Weapon is always provided in the constructor and is guaranteed to exist.
class HumanB: Uses a pointer to Weapon because the Weapon is not provided in the constructor and may not always be present. */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		// std::cout << "!!!where is my " << club.getType() << std::endl; // debug
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.attack(); //debug
		// std::cout << "DEBUG!!" << std::endl;
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}
