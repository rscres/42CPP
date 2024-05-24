/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:42:10 by rseelaen          #+#    #+#             */
/*   Updated: 2024/05/24 11:16:58 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
    _hp = 100;
	_energyPoints = 50;
    _attackDmg = 20;
    std::cout << "ScavTrap " << _name << " has been created" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    _hp = 100;
	_energyPoints = 50;
    _attackDmg = 20;
    std::cout << "ScavTrap " << _name << " has been created" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src){
    this->operator=(src);
    std::cout << "ScavTrap " << _name << " has been copied" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs) {
    ClapTrap::operator=(rhs);
    std::cout << "ScavTrap " << _name << " has been copy assigned" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap " << _name << " has been destroyed" << std::endl;
}

void ScavTrap::guardGate(void) {
    std::cout << "ScavTrap " << _name << " has entered in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (_hp <= 0) {
        std::cout << "ScavTrap " << _name << " has no health left!" <<std::endl;
        return;
    }
    if (_energyPoints == 0) {
        std::cout << "ScavTrap " << _name << " has no energy to attack!" <<std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "ScavTrap " << _name << " attacks " << target << " for " << _attackDmg
              << " points of damage!" << std::endl;
}