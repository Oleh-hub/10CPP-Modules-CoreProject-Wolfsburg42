/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:16:08 by oruban            #+#    #+#             */
/*   Updated: 2024/08/23 11:41:16 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp" // PhoneBook class

int main(void)
{
	PhoneBook book;
	std::string input;
	
	// std::cout << "Phonebook is being run" << std::endl; //tracing
	while (true)
	{
		std::cout << "Please enter a command (1.'ADD', 2.'SEARCH' or 3.'EXIT'): ";
		if (!std::getline(std::cin, input))
		// 1. if statement automatically converts the expression inside its parentheses into a boolean value
		// 2.  For input/output streams, the stream is true if it is in a good state (i.e., no errors), and false if it is in a fail state.
		{
			if (std::cin.eof()) { // 4 example Ctrl+D
				std::cout << "EOF was entered. Exiting." << std::endl;
				return 0;
			}
			else {
				std::cerr << "Error reading input. Exiting." << std::endl;
				return 1;
			}
		}
		// std::cout << "Command '" << input << "' was entered" << std::endl; //tracing
		if (input == "EXIT" || input == "3")
			break;
		if (input == "ADD" || input == "1")
			book.addContact();
		if (input == "SEARCH" || input == "2")
			book.searchContact();
		else
			std::cout << "Invalid command. Please, try again." << std::endl;
	}
	
}
