/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:04:01 by oruban            #+#    #+#             */
/*   Updated: 2024/08/21 16:02:37 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	#include "Contact.hpp"

// Setters
void Contact::setFirstName(std::string str) {
    this->_first_name = str;
}

void Contact::setLastName(std::string str) {
    this->_last_name = str;
}

void Contact::setNickname(std::string str) {
    this->_nickname = str;
}

void Contact::setPhoneNumber(std::string str) {
    this->_phone_number = str;
}

void Contact::setSecret(std::string str) {
    this->_secret = str;
}

// Getters
const std::string &Contact::getFirstName(void) {
    return this->_first_name;
}

const std::string &Contact::getLastName(void) {
    return this->_last_name;
}

const std::string &Contact::getNickname(void) {
    return this->_nickname;
}

const std::string &Contact::getPhoneNumber(void) {
    return this->_phone_number;
}

const std::string &Contact::getSecret(void) {
    return this->_secret;
}