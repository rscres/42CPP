/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 11:14:48 by renato            #+#    #+#             */
/*   Updated: 2024/05/19 18:42:30 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include "PhoneBook.hpp"

std::string getInfo(std::string info) {
    std::string input;

    std::cout << info;
	std::getline(std::cin, input);
    while (input.empty())
    {
        std::cout << "Field cannot be empty. " << std::endl << info;
        std::getline(std::cin, input);
    }
    return input;
}

bool is_num(std::string str) {
	for (size_t i = 0; i < str.length(); i++) {
		if (!isdigit(str[i]))
			return false;
	}
	return true;
}

std::string getNumber(std::string info) {
	std::string input;

    std::cout << info;
	std::getline(std::cin, input);
	while (input.empty() || !is_num(input))
    {
        std::cout << "Field cannot be empty and must contain only numbers. " << std::endl << info;
        std::getline(std::cin, input);
    }
	return input;
}

Contact setContactInfo() {
    Contact newContact;

    newContact.setFirstName(getInfo("Enter first name: "));
    newContact.setLastName(getInfo("Enter last name: "));
    newContact.setNickname(getInfo("Enter nickname: "));
    newContact.setPhoneNumber(getNumber("Enter phone number: "));
    newContact.setDarkestSecret(getInfo("Enter darkest secret: "));
    return newContact;
}

void PhoneBook::addContact() {
    for (int i = 0; i < 8; i++)
    {
        if (this->contacts[i].getFirstName() == "")
        {
            this->contacts[i] = setContactInfo();
            return;
        }
    }
    for (int i = 0; i < 7; i++)
    {
        int j = i + 1;
        this->contacts[i] = this->contacts[j];
    }
    std::cout << "Phone book is full. Replacing the oldest contact." << std::endl;
    this->contacts[7] = setContactInfo();
    return;
}

void displayContacts(Contact contacts[8]) {
	for (int i = 0; i < 8; i++) {
		if (contacts[i].getFirstName() == "")
			return;
		contacts[i].printContact(i);
	}

}

void printSearch(Contact contact) {
	std::cout << std::endl;
	std::cout << "First name    : " << contact.getFirstName() << std::endl;
	std::cout << "Last name     : " << contact.getLastName() << std::endl;
	std::cout << "Nickname      : " << contact.getNickname() << std::endl;
	std::cout << "Phone number  : " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << contact.getDarkestSecret() << std::endl;
	std::cout << std::endl;
}

void PhoneBook::searchContact() {
	displayContacts(this->contacts);
    std::string index = getInfo("Enter the index of the contact you want to see[0-7]: ");
    if (index.length() == 1 && index[0] >= '0' && index[0] <= '7')
    {
        std::stringstream ss(index);
        int i;
        ss >> i;
        if (this->contacts[i].getFirstName() == "")
        {
            std::cout << "No contact at this index" << std::endl;
            return;
        }
        printSearch(this->contacts[i]);
    }
    else
    {
        std::cout << "Invalid index" << std::endl;
    }
}
