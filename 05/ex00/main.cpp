/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 16:25:13 by rseelaen          #+#    #+#             */
/*   Updated: 2024/05/30 14:02:25 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main(void) {
	
	std::cout << "Invalid grade tests: " << std::endl;
	try {
		std::cout << "Test grade 0" << std::endl;
		Bureaucrat bob("Bob", 0);
	} catch (std::exception &e) {
		std::cerr << "Caught Exception: " << e.what() << std::endl;
	}

	try {
		std::cout << "Test grade 152" << std::endl;
		Bureaucrat bob("Bob", 152);
	} catch (std::exception &e) {
		std::cerr << "Caught Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Increase/decrease grade tests: " << std::endl;
	try {
		Bureaucrat bob("Bob", 149);
		std::cout << bob << std::endl;
		bob.decreaseGrade();
		std::cout << bob << std::endl;
		bob.decreaseGrade();
		std::cout << bob << std::endl;
	} catch (std::exception &e) {
		std::cerr << "Caught Exception: " << e.what() << std::endl;
	}

	try {
		Bureaucrat bob("Bob", 2);
		std::cout << bob << std::endl;
		bob.increaseGrade();
		std::cout << bob << std::endl;
		bob.increaseGrade();
		std::cout << bob << std::endl;
	} catch (std::exception &e) {
		std::cerr << "Caught Exception: " << e.what() << std::endl;
	}
}