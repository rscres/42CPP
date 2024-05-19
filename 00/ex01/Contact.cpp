/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 22:22:27 by renato            #+#    #+#             */
/*   Updated: 2024/05/19 18:49:27 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

void Contact::setFirstName(std::string firstName) {
    this->firstName = firstName;
}

void Contact::setLastName(std::string lastName) {
    this->lastName = lastName;
}

void Contact::setNickname(std::string nickname) {
    this->nickname = nickname;
}

void Contact::setPhoneNumber(std::string phoneNumber) {
    this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret) {
    this->darkestSecret = darkestSecret;
}

std::string Contact::getFirstName() {
    return this->firstName;
}

std::string Contact::getLastName() {
    return this->lastName;
}

std::string Contact::getNickname() {
    return this->nickname;
}

std::string Contact::getPhoneNumber() {
    return this->phoneNumber;
}

std::string Contact::getDarkestSecret() {
    return this->darkestSecret;
}

std::string formatString(std::string str) {
    int len = str.length();

    if (len >= 10)
    {
        str.resize(9);
        str.append(".");
    }
    return str;
}

void Contact::printContact(int index) {
	std::cout << "| " << std::setw(10) << std::right << index << "|"
			  << std::setw(10) << std::right << formatString(this->firstName) << "|"
			  << std::setw(10) << std::right << formatString(this->lastName) << "|"
			  << std::setw(10) << std::right << formatString(this->nickname) << "|" << std::endl;
}
