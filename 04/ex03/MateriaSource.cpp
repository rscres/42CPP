/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 00:23:56 by renato            #+#    #+#             */
/*   Updated: 2024/05/26 00:57:33 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++)
        _materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other) {
    this->operator=(other);
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
    if (this != &other) {
        for (int i = 0; i < 4; i++) {
            if (_materia[i] != NULL)
                delete _materia[i];
            _materia[i] = other._materia[i]->clone();
        }
    }
    return *this;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++) {
        if (_materia[i] != NULL)
            delete _materia[i];
            // _materia[i] = NULL;
    }
}

void MateriaSource::learnMateria(AMateria* materia) {
    if (materia == NULL) {
        std::cout << "Can't learn from no materia" << std::endl;
        return;
    }
    for (int i = 0; i < 4; i++) {
        if (_materia[i] == NULL) {
            _materia[i] = materia;
            return;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++) {
        if (_materia[i] != NULL && type.compare(_materia[i]->getType()) == 0)
            return _materia[i]->clone();
    }
    std::cout << "You haven't learned this materia yet" << std::endl;
    return NULL;
}