/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 11:14:48 by renato            #+#    #+#             */
/*   Updated: 2024/05/07 23:13:13 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <iostream>
#include <string>
#include <sstream>
#include "PhoneBook.hpp"

std::string getInfo(std::string info)
{
    std::string input;

    std::cout << info;
    std::cin >> input;
    while (input.empty())
    {
        std::cout << std::endl << "Field cannot be empty. " << info;
        std::cin >> input;
    }
    return input;
}

Contact setContactInfo()
{
    Contact newContact;

    newContact.setFirstName(getInfo("Enter first name: "));
    newContact.setLastName(getInfo("Enter last name: "));
    newContact.setNickname(getInfo("Enter nickname: "));
    newContact.setPhoneNumber(getInfo("Enter phone number: "));
    newContact.setDarkestSecret(getInfo("Enter darkest secret: "));
    return newContact;
}

void PhoneBook::addContact()
{
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

void PhoneBook::searchContact()
{
    std::string index;

    index = getInfo("Enter the index of the contact you want to see: ");
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
        this->contacts[i].printContact(i);
    }
    else
    {
        std::cout << "Invalid index" << std::endl;
    }
}
