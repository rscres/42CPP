/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 21:26:08 by renato            #+#    #+#             */
/*   Updated: 2024/05/15 14:32:26 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() {
    std::cout << "Zombie has been created" << std::endl;
}

Zombie::~Zombie(void) {
    std::cout << this->name << "[" << this->position << "] has been destroyed" << std::endl;
}

void Zombie::setName(std::string name) {
	this->name = name;
}

void Zombie::setPosition(int pos) {
	this->position = pos;
}

void Zombie::announce(void) {
    std::cout << this->name << "[" << this->position << "]: BraiiiiiiinnnzzzZ..." << std::endl;
}
