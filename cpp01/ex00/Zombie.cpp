/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:53:08 by oruban            #+#    #+#             */
/*   Updated: 2024/08/29 12:26:19 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #ifndef Zombie_HPP
# define Zombie_HPP

#include <iostream>
#include <string>

class Zombie {
private:
	std::string name;
public:
	Zombie(std::string public_name);
	~Zombie();
	void announce(void);
};

#endif // Zombie_HPP */

#include "Zombie.hpp"

/************************************************/
/*					CONSTRUCTOR					*/
/************************************************/
Zombie::Zombie(std::string public_name) : name(public_name) {
}
/************************************************/
/*					DISRUCTOR					*/
/************************************************/
Zombie::~Zombie() {
	std::cout << "Zombie " << name << " stopped its existence." << std::endl;
}
/************************************************/
/*					PUBLIC						*/
/************************************************/
void Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

