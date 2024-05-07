/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 11:14:48 by renato            #+#    #+#             */
/*   Updated: 2024/05/05 21:49:05 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

char    *getInfo(std::string info)
{
    char *input = NULL;

    std::cout << info;
    while (!input)
        std::cin >> input;
    return input;
}

void PhoneBook::addContact()
{
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

    firstName = getInfo("First name: ");
    std::cout << "Last name: ";
    std::cin >> lastName;
    std::cout << "Nickname: ";
    std::cin >> nickname;
    std::cout << "Phone number: ";
    std::cin >> phoneNumber;
    std::cout << "Darkest secret: ";
    std::cin >> darkestSecret;
}
