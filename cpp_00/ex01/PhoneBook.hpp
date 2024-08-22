#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string> // is already included in STL's iostream
# include <limits> // std::numeric_limits
# include <stdio.h> // clearerr

class	PhoneBook {
public:
	PhoneBook();
	
	void addContact(void);
	void searchContact(void);

private:
	static const int _MAX_CONTACTS = 8;
	// Contact contacts[MAX_CONTACTS];
	int _saved_contacts_size;
	int _oldest_contact_index;
	std::string _getInput(std::string prompt);
	std::string _inputPhoneNumber(void);
	std::string _truncateString(std::string &str, size_t width);
	void _showCpntacts(void);
	void _showContactData(int index);
	void _resetInputStream(void);
	bool _isAllDigits(const std::string &str); // do not use it
	int _inputSearchIndex(void);
};
#endif	// PHONEBOOK_HPP