/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:29:57 by oruban            #+#    #+#             */
/*   Updated: 2024/08/29 20:13:17 by oruban           ###   ########.fr       */
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

Zombie* zombieHorde( int N, std::string name );

#endif // Zombie_HPP
