/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:41:42 by oruban            #+#    #+#             */
/*   Updated: 2024/08/30 10:54:28 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int n, std::string name ) {
	Zombie* horde = new Zombie[n]; // n Zombie objects in a single allocation.
	for (int i = 0; i < n; i++) {
		horde[i].setName(name);
		horde[i].announce();
	}
	return horde;
	
}
