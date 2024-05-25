/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 21:38:45 by renato            #+#    #+#             */
/*   Updated: 2024/05/25 18:28:16 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat") {
    _brain = new Brain();
    std::cout << MAGENTA "Cat default constructor" RESET << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
    std::cout << MAGENTA "Cat copy constructor" RESET << std::endl;
    this->operator=(other);
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) { 
        _brain = new Brain(*other._brain);    
        this->_type = other._type;
    }
    return *this;
}

Cat::~Cat() {
    delete _brain;
    std::cout << MAGENTA "Cat default destructor" RESET << std::endl;
}

void Cat::makeSound() const {
    std::cout << MAGENTA "Meoow!" RESET << std::endl;
}

Brain* Cat::getBrain() const {
    return _brain;
}