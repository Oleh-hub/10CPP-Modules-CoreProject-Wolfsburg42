/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:16:08 by oruban            #+#    #+#             */
/*   Updated: 2024/06/26 11:29:21 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(void)
{
	Contact contact;
	std::string command;
	
/* 	getline(std::cin, contact.first_name);
	std::cout << contact.get_first_name() << std::endl;
	std::cout << contact.first_name << std::endl; */
	std::cout << "Phonebook is being run" << std::endl;
	while (true)
	{
		std::cout << "Please enter a command ('ADD', 'SEARCH' or 'EXIT'): ";
		std::getline(std::cin, command);
		std::cout << "Command '" << command << "' was entered" << std::endl;
		if (command == "ADD")
			;
		if (command == "EXIT")
			break;
	}
	
}

/* int main()
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
} */
