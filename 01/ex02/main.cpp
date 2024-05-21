/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 14:45:21 by rseelaen          #+#    #+#             */
/*   Updated: 2024/05/21 17:51:39 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <memory>

int main(void) {
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	
	std::cout << "Memory address of string: " << std::__addressof(str) << std::endl;
	std::cout << "Memory address of stringPTR: " << std::__addressof(stringPTR) << std::endl;
	std::cout << "Memory address of stringREF: " << std::__addressof(stringREF) << std::endl;

	std::cout << "String: " << str << std::endl;
	std::cout << "stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl; 
	return 0;
}