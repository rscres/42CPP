/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 22:39:48 by renato            #+#    #+#             */
/*   Updated: 2024/05/26 00:10:26 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria() {
    _type = "cure";
}

Cure::Cure(const Cure& other) : AMateria() {
    this->operator=(other);
}

Cure& Cure::operator=(const Cure& other) {
    if (this != &other) {
        _type = other._type;
    }
    return *this;
}

Cure::~Cure() {}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria* Cure::clone() const {
    AMateria* newMateria = new Cure(*this);
    return newMateria;
}