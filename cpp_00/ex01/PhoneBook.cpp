/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 14:48:03 by oruban            #+#    #+#             */
/*   Updated: 2024/08/22 13:55:40 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/********************************************************************/
/*                             CONSTRUCTOR                          */
/********************************************************************/
PhoneBook::PhoneBook() : _saved_contacts_size(0), _oldest_contact_index(0) {
}

/********************************************************************/
/*                          PUBLIC                                  */
/********************************************************************/
void PhoneBook::addContact(void) {
	Contact new_contact;
	std::string input;

	new_contact.setFirstName(_getInput("first name"));
	if (new_contact.getFirstName().empty())
		return;
	new_contact.setLastName(_getInput("last name"));
	if (new_contact.getLastName().empty())
		return;
	new_contact.setNickname(_getInput("nickname"));
	if (new_contact.getNickname().empty())
		return;
	new_contact.setPhoneNumber(_inputPhoneNumber());
	if (new_contact.getPhoneNumber().empty())
		return;
	new_contact.setSecret(_getInput("darkest secret"));
	if (new_contact.getSecret().empty())
		return;
	std::cout << "Contact was added successfully!" << std::endl;
	std::cout << "Contact data:" << std::endl;
	std::cout << "Fist name:		" << new_contact.getFirstName() << std::endl;
	std::cout << "Last name:		" << new_contact.getLastName() << std::endl;
	std::cout << "Nickname:		" << new_contact.getNickname() << std::endl;
	std::cout << "Phone number:		" << new_contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest secret:		" << new_contact.getSecret() << std::endl;
	 
	_contacts[_oldest_contact_index % _MAX_CONTACTS] = new_contact; // elegant way to cycle through the array
	_oldest_contact_index++;
	if (_saved_contacts_size < _MAX_CONTACTS)
		_saved_contacts_size++;
}

// is designed to reset the state of the standard input stream. 
// to clear any errors and discard any unwanted input that might be left in the input buffer.
void PhoneBook::_resetInputStream(){
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
	//where,
	// ignore() is used to ignore characters in the input buffer.
	// max() specifies the maximum number of characters to ignore. This effectively means it will ignore characters until it encounters the delimiter '\n'.
	std::cin.clear(); // clear the error state of the standard input stream.
	clearerr(stdin); // clear the error state of the standard input stream.
}

std::string PhoneBook::_getInput(std::string prompt) {
	std::string input = "";

	std::cout << "Please enter " << prompt << ": ";
	while (true) {
		if (!std::getline(std::cin, input)) {
			if (std::cin.eof()) { // 4 example Ctrl+D
				std::cout << "EOF was entered. Exiting entering " << prompt << std::endl;
			}
			else
				std::cerr << "Error reading input. Exiting." << std::endl;
			std::cout << "Contact was not added! Try again." << std::endl;
			_resetInputStream();
			return "";
		}
		if (input.empty()) {
			std::cout << "Please, enter a valid (not empty) " << prompt << ": ";
			continue;
		}
		return input;
	}
}

std::string PhoneBook::_inputPhoneNumber(void){
	std::string input = "";

	std::cout << "Please enter phone number: ";
	while (true) {
		if (!std::getline(std::cin, input)) {
			if (std::cin.eof()) // 4 example Ctrl+D
				std::cout << "EOF was entered. Exiting entering phone number" << std::endl;
			else
				std::cerr << "Error reading input. Exiting." << std::endl;
			std::cout << "Contact was not added! Try again." << std::endl;
			_resetInputStream();
			return "";
		}
		if (input.empty()) {
			std::cout << "Please, enter a valid (not empty) phone number: ";
			continue;
		}
		if (input.find_first_not_of("0123456789") != std::string::npos)  // is allowed by subj "Forbidden functions : None"
			std::cout << "Please, enter a valid phone number (only digits): ";
		else
			return input;
	}
}
