/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 20:31:12 by renato            #+#    #+#             */
/*   Updated: 2024/05/25 20:31:30 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal() {
    std::cout << BLUE "AAnimal default constructor" RESET << std::endl;
    _type = "AAnimal";
}

AAnimal::AAnimal(std::string type) {
    std::cout << BLUE "AAnimal constructor" RESET << std::endl;
	_type = type;
}

AAnimal::AAnimal(const AAnimal& other) {
    std::cout << BLUE "AAnimal copy constructor" RESET << std::endl;
    this->operator=(other);
}

AAnimal& AAnimal::operator=(const AAnimal& other) {
    _type = other._type;
    return *this;
}

AAnimal::~AAnimal() {
    std::cout << BLUE "AAnimal destructor" RESET << std::endl;
}

std::string AAnimal::getType() const {
    return _type;
}