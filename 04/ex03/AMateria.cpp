/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 22:41:16 by renato            #+#    #+#             */
/*   Updated: 2024/05/26 00:37:13 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(const AMateria& other) {
    this->operator=(other);
}

AMateria& AMateria::operator=(const AMateria& other) {
    if (this != &other)
        this->_type = other._type;
    return *this;
}

AMateria::~AMateria() {}

void AMateria::use(ICharacter& target) {
    (void)target;
}

std::string const & AMateria::getType() const {
    return _type;
}
