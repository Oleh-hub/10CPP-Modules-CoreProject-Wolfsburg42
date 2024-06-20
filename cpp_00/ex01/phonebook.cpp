/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 14:48:03 by oruban            #+#    #+#             */
/*   Updated: 2024/06/20 14:52:04 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
	PhoneBook	phonebook;
	std::string	command;
	while(true)
	{
		std::cout << "Enter the command ('ADD', 'SEARCH' or 'EXIT'): ";
		std::cin >> command;
		if (command == "ADD")
			// phonebook.add_contact()
			;
		else if (command == "SEARCH")
			// phonebook.search_contact()
			;
		else if (command == "EXIT")
			break;
		else
		{
			std::cout << "Wrong command. Choose between 'ADD', 'SEARCH' or" \
				<< " 'EXIT'" << std::endl;
		}
	}
}