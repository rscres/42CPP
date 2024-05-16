/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 20:43:20 by renato            #+#    #+#             */
/*   Updated: 2024/05/15 21:51:04 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {
}

HumanA::~HumanA(void) {
}

void HumanA::attack(void) {
    std::cout << this->name << " attacks with " << this->weapon.getType() << std::endl;
}