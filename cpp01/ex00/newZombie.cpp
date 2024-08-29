/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:27:16 by oruban            #+#    #+#             */
/*   Updated: 2024/08/29 13:12:15 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* creates a zombie, name it, and return it so you can use it outside of the function scope. */
Zombie* newZombie(std::string name) {

	Zombie *new_zombie = new Zombie(name);
	// std::cout << std::endl << "sizeof(Zombie) = " << sizeof(Zombie) << std::endl;
	return new_zombie;
}
