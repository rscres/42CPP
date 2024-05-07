/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 08:53:40 by renato            #+#    #+#             */
/*   Updated: 2024/05/04 08:53:40 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main()
{
	PhoneBook phoneBook;
	std::string command;

	while (1)
	{
		std::cout << "Enter a command: ";
		std::cin >> command;
		if (command == "ADD")
		    phoneBook.addContact();
		// else if (command == "SEARCH")
		//     phoneBook.searchContact();
		else if (command == "EXIT")
		    break;
		else
		    std::cout << "Invalid command" << std::endl;
	}
	return 0;
}