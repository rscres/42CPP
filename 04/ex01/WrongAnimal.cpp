/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 12:48:06 by renato            #+#    #+#             */
/*   Updated: 2024/05/25 13:05:10 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() {
    std::cout << RED "WrongAnimal default constructor" RESET << std::endl;
    _type = "";
}

WrongAnimal::WrongAnimal(std::string type) {
    std::cout << RED "WrongAnimal type constructor" RESET << std::endl;
    _type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
    std::cout << RED "WrongAnimal copy constructor" RESET << std::endl;
    this->operator=(other);
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    this->_type = other._type;
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << RED "WrongAnimal destructor" RESET << std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout << RED "WrongAnimal sound" RESET << std::endl;
}

std::string WrongAnimal::getType() const {
    return _type;
}