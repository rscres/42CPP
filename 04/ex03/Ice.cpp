/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 22:27:21 by renato            #+#    #+#             */
/*   Updated: 2024/05/26 00:10:47 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria() {
    _type = "ice";
}

Ice::Ice(const Ice& other) : AMateria() {
    this->operator=(other);
}

Ice& Ice::operator=(const Ice& other) {
    if (this != &other) {
        _type = other._type;
    }
    return *this;
}

Ice::~Ice() {
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const {
    AMateria* newMateria = new Ice(*this);
    return newMateria;
}