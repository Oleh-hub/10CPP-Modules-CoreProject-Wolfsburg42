/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:29:57 by oruban            #+#    #+#             */
/*   Updated: 2024/08/29 13:43:09 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Zombie_HPP
# define Zombie_HPP

#include <iostream>
#include <string>

class Zombie {
private:
	std::string name;
public:
	// Setters
	Zombie(std::string public_name);
	~Zombie();
	void announce(void);
};

Zombie* newZombie( std::string name ); // It creates a zombie, name it, and return it so you can use it outside of the function scope.

void randomChump( std::string name ); //It creates a zombie, name it, and the zombie announces itself.

#endif // Zombie_HPP
