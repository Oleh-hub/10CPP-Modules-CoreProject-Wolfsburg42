/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:21:58 by oruban            #+#    #+#             */
/*   Updated: 2024/08/29 14:30:21 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
//============ Creation on stack	
	
	std::string consol_name;
	std::cout << "Enter name of the zombie that will be created on stack: " << std::flush;
	std::cin >> consol_name;
	
	Zombie stack_zombie(consol_name);
	stack_zombie.announce();
//================= Creation on heap via newZombie()
	std::string heapzombie_name;
	std::cout << "Enter name of the zombie that will be created on heap: " << std::flush;
	std::cin >> heapzombie_name;
	
	Zombie *heap_zombie;
	heap_zombie = newZombie(heapzombie_name);
	heap_zombie->announce();
//================= Creation on stack via randomChump()
	std::string randomchampzombie_name;
	std::cout << "Enter name of zombie for randomChump() - creation on stack: " << std::flush;
	std::cin >> randomchampzombie_name;
	
	randomChump(randomchampzombie_name);
	delete heap_zombie;
}
