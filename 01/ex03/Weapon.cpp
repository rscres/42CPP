/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:31:06 by rseelaen          #+#    #+#             */
/*   Updated: 2024/05/15 16:00:49 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(void) {
	this->type = "";
}

Weapon::~Weapon(void) {
}

void Weapon::setType(std::string type) {
	this->type = type;
}

std::string const &Weapon::getType(void) {
	return this->type;
}

