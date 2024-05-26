/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 21:38:45 by renato            #+#    #+#             */
/*   Updated: 2024/05/25 21:19:04 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : AAnimal("Cat") {
    _brain = new Brain();
    std::cout << MAGENTA "Cat default constructor" RESET << std::endl;
}

Cat::Cat(const Cat& other) : AAnimal(other) {
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

std::string Cat::getIdea(int index) const {
    return _brain->getIdea(index);
}

void Cat::setIdea(std::string idea, int index) {
    _brain->setIdea(idea, index);
}