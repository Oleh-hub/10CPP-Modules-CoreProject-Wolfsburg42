/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:04:01 by oruban            #+#    #+#             */
/*   Updated: 2024/08/23 14:15:38 by oruban           ###   ########.fr       */
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
const std::string &Contact::getFirstName(void) const {
    return this->_first_name;
}

const std::string &Contact::getLastName(void) const {
    return this->_last_name;
}

const std::string &Contact::getNickname(void) const {
    return this->_nickname;
}

const std::string &Contact::getPhoneNumber(void) const {
    return this->_phone_number;
}

const std::string &Contact::getSecret(void) const {
    return this->_secret;
}