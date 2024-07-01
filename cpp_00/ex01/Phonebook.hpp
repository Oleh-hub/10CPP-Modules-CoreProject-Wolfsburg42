#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <Contact.hpp>
# include <iostream>

class	PhoneBook
{
	public:
	Contact	contacts[8];
	std::string	add_contact();
};
#endif	// PHONEBOOK_HPP