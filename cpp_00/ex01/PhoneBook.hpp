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
	static const int MAX_CONTACTS = 8;
	// Contact contacts[MAX_CONTACTS];
	int saved_contacts_size;
	int oldest_contact_index;
	std::string getInput(std::string prompt);
	std::string inputPhoneNumber(void);
	std::string tuncateString(std::string &str, size_t width);
	void showCpntacts(void);
	void showContactData(int index);
	void resetInputStream(void);
	bool isAllDigits(const std::string &str);
	int inputSearchIndex(void);
};
#endif	// PHONEBOOK_HPP