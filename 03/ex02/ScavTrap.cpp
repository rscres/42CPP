/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:42:10 by rseelaen          #+#    #+#             */
/*   Updated: 2024/05/24 16:58:24 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
    _hp = 100;
	_energyPoints = 50;
    _attackDmg = 20;
    std::cout << GREEN "ScavTrap " RESET << _name << " has come into being" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    _hp = 100;
	_energyPoints = 50;
    _attackDmg = 20;
    std::cout << GREEN "ScavTrap " RESET << _name << " has come into being" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src){
    this->operator=(src);
    std::cout << GREEN "ScavTrap " RESET << _name << " has made a copy" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs) {
    ClapTrap::operator=(rhs);
    std::cout << GREEN "ScavTrap " RESET << _name << " has been copied through assignment" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap(void) {
    std::cout << GREEN "ScavTrap " RESET << _name << " is no more" << std::endl;
}

void ScavTrap::guardGate(void) {
    std::cout << GREEN "ScavTrap " RESET << _name << " has entered in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (_hp <= 0) {
        std::cout << GREEN "ScavTrap " RESET << _name << " has no health left!" <<std::endl;
        return;
    }
    if (_energyPoints == 0) {
        std::cout << GREEN "ScavTrap " RESET << _name << " has no energy to attack!" <<std::endl;
        return;
    }
    _energyPoints--;
    std::cout << GREEN "ScavTrap " RESET << _name << " attacks " << target << "! Dealing " << _attackDmg
              << " points of damage!" << std::endl;
}