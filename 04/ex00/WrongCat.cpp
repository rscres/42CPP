/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 12:48:12 by renato            #+#    #+#             */
/*   Updated: 2024/05/25 13:05:49 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
    std::cout << WHITE "WrongCat default constructor" RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
    std::cout << WHITE "WrongCat copy constructor" RESET << std::endl;
    this->_type = other._type;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
    this->_type = other._type;
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << WHITE "WrongCat destructor" RESET << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << WHITE "WrongCat sound" RESET << std::endl;
}