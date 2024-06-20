/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 17:51:11 by oruban            #+#    #+#             */
/*   Updated: 2024/06/20 09:33:37 by oruban           ###   ########.fr       */
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
		long long	phone_number;
	private:
		std::string darkest_secret;
};

class	PhoneBook
{
	public:
		Contact	contacts[8];
		std::string	add_contact();
		void	search_contact();
};
#endif	// PHONEBOOK_HPP