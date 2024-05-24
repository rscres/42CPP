/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:42:10 by rseelaen          #+#    #+#             */
/*   Updated: 2024/05/23 21:44:17 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
    setHp(100);
    setEnergyPoints(50);
    setAttackDmg(20);
    std::cout << "ScavTrap " << getName() << " has been created" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    setHp(100);
    setEnergyPoints(50);
    setAttackDmg(20);
    std::cout << "ScavTrap " << getName() << " has been created" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src){
    this->operator=(src);
    std::cout << "ScavTrap " << getName() << " has been copied" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs) {
    ClapTrap::operator=(rhs);
    std::cout << "ScavTrap " << getName() << " has been copy assigned" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap " << getName() << " has been destroyed" << std::endl;
}

void ScavTrap::guardGate(void) {
    std::cout << "ScavTrap " << getName() << " has entered in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (getHp() <= 0) {
        std::cout << "ScavTrap " << getName() << " has no health left!" <<std::endl;
        return;
    }
    if (getEnergyPoints() == 0) {
        std::cout << "ScavTrap " << getName() << " has no energy to attack!" <<std::endl;
        return;
    }
    setEnergyPoints(getEnergyPoints() - 1);
    std::cout << "ScavTrap " << getName() << " attacks " << target << " for " << getAttackDmg()
              << " points of damage!" << std::endl;
}