/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 21:46:24 by renato            #+#    #+#             */
/*   Updated: 2024/05/26 01:07:40 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
    _name = "default";
    for (int i = 0; i < 4; i++)
        _materia[i] = NULL;
}

Character::Character(std::string name) {
    _name = name;
    for (int i = 0; i < 4; i++)
        _materia[i] = NULL;
}

Character::Character(const Character& other) {
    this->operator=(other);
}

Character& Character::operator=(const Character& other) {
    if (this != &other) {
        _name = other._name;
        for (int i = 0; i < 4; i++) {
            if (_materia[i] != NULL)
                delete _materia[i];
            _materia[i] = other._materia[i]->clone();
        }
    }
    return *this;
}

Character::~Character() {
    for (int i = 0; i < 4; i++) {
        if (_materia[i] != NULL)
            delete _materia[i];
    }
}

std::string const & Character::getName() const {
    return _name;
}

void Character::equip(AMateria* m) {
    for (int i = 0; i < 4; i++) {
        if (_materia[i] == NULL) {
            _materia[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4) {
        delete _materia[idx];
        _materia[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target) {
    if (idx < 0 || idx > 3)
        return;
    if (_materia[idx] != NULL)
        _materia[idx]->use(target);
}