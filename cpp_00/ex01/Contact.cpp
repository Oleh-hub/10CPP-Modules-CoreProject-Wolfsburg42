/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:04:01 by oruban            #+#    #+#             */
/*   Updated: 2024/08/20 14:36:01 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	#include "PhoneBook.hpp"
	
	Contact::Contact()
	{
		this->first_name = "";
		// this->last_name("");
		this->nickname = "";
		this->phone_number = "";
	}
	
	std::string	Contact::get_first_name()
	{
		return (this->first_name);
	}