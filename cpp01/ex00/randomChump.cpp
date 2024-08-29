/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:44:14 by oruban            #+#    #+#             */
/*   Updated: 2024/08/29 14:25:05 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//It creates a zombie, name it, and the zombie announces itself.
// creationi on stack. - roi
void randomChump(std::string name) {

Zombie random_champ(name);
random_champ.announce();	
}