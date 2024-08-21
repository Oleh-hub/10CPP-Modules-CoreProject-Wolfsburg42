/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 14:48:03 by oruban            #+#    #+#             */
/*   Updated: 2024/08/21 18:15:52 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/********************************************************************/
/*                             CONSTRUCTOR                          */
/********************************************************************/
PhoneBook::PhoneBook() : saved_contacts_size(0), oldest_contact_index(0) {
}

/********************************************************************/
/*                          PUBLIC                                  */
/********************************************************************/
void PhoneBook::addContact(void) {
	Contact new_contact;
	std::string input;

	new_contact.setFirstName(getInput("first name"));
	if (new_contact.getFirstName().empty())
		return;
	new_contact.setLastName(getInput("last name"));
	if (new_contact.getLastName().empty())
		return;
	new_contact.setNickname(getInput("nickname"));
	if (new_contact.getNickname().empty())
		return;
	std::cout << new_contact.getFirstName() << std::endl; //tracing
	std::cout << new_contact.getLastName() << std::endl; //tracing
	std::cout << new_contact.getNickname() << std::endl; //tracing
}

// is designed to reset the state of the standard input stream. 
// to clear any errors and discard any unwanted input that might be left in the input buffer.
void PhoneBook::resetInputStream(){
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
	//where,
	// ignore() is used to ignore characters in the input buffer.
	// max() specifies the maximum number of characters to ignore. This effectively means it will ignore characters until it encounters the delimiter '\n'.
	std::cin.clear(); // clear the error state of the standard input stream.
	clearerr(stdin); // clear the error state of the standard input stream.
}

std::string PhoneBook::getInput(std::string prompt) {
	std::string input = "";
		
	std::cout << "Please enter " << prompt << ": ";
	while (true) {
		if (!std::getline(std::cin, input)){
			if (std::cin.eof()) { // 4 example Ctrl+D
				std::cout << "EOF was entered. Exiting entering " << prompt << std::endl;
			}
			else
				std::cerr << "Error reading input. Exiting." << std::endl;
			std::cout << "Contact was not added! Try again." << std::endl;
			resetInputStream();
			return "";
		}
		if (input.empty()) {
			std::cout << "Please, enter a valid (not empty) " << prompt << ": ";
			continue;
		}
		return input;
	}
}
