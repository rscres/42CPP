/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 20:46:33 by renato            #+#    #+#             */
/*   Updated: 2024/05/15 21:50:12 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) {
    this->weapon = NULL;
}

HumanB::~HumanB(void) {
}

void HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
}

void HumanB::attack(void) {
    if (this->weapon == NULL)
        std::cout << this->name << " has no weapon" << std::endl;
    else
        std::cout << this->name << " attacks with " << this->weapon->getType() << std::endl;
}