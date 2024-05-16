/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:31:06 by rseelaen          #+#    #+#             */
/*   Updated: 2024/05/15 17:54:55 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(void) {
	this->type = "";
}

Weapon::Weapon(std::string type) {
	this->type = type;
}

Weapon::~Weapon(void) {
}

void Weapon::setType(std::string type) {
	this->type = type;
}

std::string const &Weapon::getType(void) {
	return this->type;
}

