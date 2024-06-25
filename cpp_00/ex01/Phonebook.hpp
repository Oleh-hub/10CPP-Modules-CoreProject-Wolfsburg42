/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 17:51:11 by oruban            #+#    #+#             */
/*   Updated: 2024/06/25 17:39:25 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>

class	Contact
{
	public:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string darkest_secret;

	std::string	get_first_name();
};

class	PhoneBook
{
	public:
	Contact	contacts[8];
	std::string	add_contact();
};
#endif	// PHONEBOOK_HPP