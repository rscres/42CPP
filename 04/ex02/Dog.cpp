/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 21:37:55 by renato            #+#    #+#             */
/*   Updated: 2024/05/25 21:22:46 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : AAnimal("Dog") {
    _brain = new Brain();
    std::cout << GREEN "Dog default constructor" RESET << std::endl;
}

Dog::Dog(const Dog& other) : AAnimal(other) {
    std::cout << GREEN "Dog copy constructor" RESET << std::endl;
    this->operator=(other);
}

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) { 
        _brain = new Brain(*other._brain);
        this->_type = other._type;
    }
    return *this;
}

Dog::~Dog() {
    delete _brain;
    std::cout << GREEN "Dog default destructor" RESET << std::endl;
}

void Dog::makeSound() const {
    std::cout << GREEN "Woof woof!" RESET << std::endl;
}

Brain* Dog::getBrain() const {
    return _brain;
}

std::string Dog::getIdea(int index) const {
    return _brain->getIdea(index);
}

void Dog::setIdea(std::string idea, int index) {
    _brain->setIdea(idea, index);
}