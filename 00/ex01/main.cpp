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

void printInstructions() {
	std::cout << "Use one of the following commands:" << std::endl;
	std::cout << "[ADD]: add a contact to the phonebook." << std::endl;
	std::cout << "[SEARCH]: look for a contact in the phonebook by the index." << std::endl;
	std::cout << "[EXIT]: exit the program." << std::endl;
}

int main() {
	PhoneBook phoneBook;
	std::string command;

	while (1)
	{
		printInstructions();
		std::cout << "Enter a command: ";
		std::getline(std::cin, command);
		if (command == "ADD")
		    phoneBook.addContact();
		else if (command == "SEARCH")
		    phoneBook.searchContact();
		else if (command == "EXIT")
		    break;
		else
		    std::cout << "Invalid command" << std::endl;
	}
	return 0;
}
