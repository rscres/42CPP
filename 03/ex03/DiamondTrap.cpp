/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 23:21:52 by renato            #+#    #+#             */
/*   Updated: 2024/05/24 15:57:53 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap() {
    std::cout << WHITE "DiamondTrap\033[0m default constructor called" << std::endl;
    _name = "Default";
    ClapTrap::_name = "Default_clap_name";
    _hp = FragTrap::_defaultHP;
    _energyPoints = ScavTrap::_defaultEnergyPoints;
    _attackDmg = FragTrap::_attackDmg;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name) {
    std::cout << WHITE "DiamondTrap\033[0m name constructor called" << std::endl;
    _name = name;
    ClapTrap::_name = name + "_clap_name";
    _hp = FragTrap::_defaultHP;
    _energyPoints = ScavTrap::_defaultEnergyPoints;
    _attackDmg = FragTrap::_attackDmg;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src), ScavTrap(src), FragTrap(src){
    std::cout << WHITE "DiamondTrap\033[0m copy constructor called" << std::endl;
    *this = src;
}

DiamondTrap::~DiamondTrap() {
    std::cout << WHITE "DiamondTrap\033[0m destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs) {
    std::cout << WHITE "DiamondTrap\033[0m assignation operator called" << std::endl;
    _name = rhs._name;
    _hp = rhs._hp;
    _energyPoints = rhs._energyPoints;
    _attackDmg = rhs._attackDmg;
    return *this;
}

void DiamondTrap::whoAmI() {
    std::cout << "My name is " << _name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}
