/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 22:22:27 by renato            #+#    #+#             */
/*   Updated: 2024/05/07 22:53:07 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

void Contact::setFirstName(std::string firstName)
{
    this->firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
    this->lastName = lastName;
}

void Contact::setNickname(std::string nickname)
{
    this->nickname = nickname;
}

void Contact::setPhoneNumber(std::string setPhoneNumber)
{
    this->phoneNumber = setPhoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
    this->darkestSecret = darkestSecret;
}

std::string Contact::getFirstName()
{
    return this->firstName;
}

std::string formatString(std::string str)
{
    int len = str.length();

    if (len >= 10)
    {
        str.resize(9);
        str.append(".");
    }
    else if (len < 10)
    {
        while (len++ < 10)
            str.insert(0, " ");
    }
    return str;
}

void Contact::printContact(int index)
{
    std::cout << "|" << index << "|"
              << formatString(this->firstName) << "|"
              << formatString(this->lastName) << "|"
              << formatString(this->nickname) << "|" << std::endl;
}