/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 22:06:40 by renato            #+#    #+#             */
/*   Updated: 2024/05/24 11:16:08 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("FragTrap") {
    _hp = 100;
	_energyPoints = 100;
    _attackDmg = 30;
    std::cout << "FragTrap has spawned" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    _hp = 100;
	_energyPoints = 100;
    _attackDmg = 30;
    std::cout << "FragTrap has spawned with a name" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src) {
    std::cout << "FragTrap has spawned as a copy" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs) {
    ClapTrap::operator=(rhs);
    std::cout << "FragTrap copy assignment operator" << std::endl;
    return *this;
}

FragTrap::~FragTrap(void) {
    std::cout << "FragTrap destructor" << std::endl;
}

void FragTrap::highFiveGuys(void) {
    std::cout << "FragTrap " << _name << " high fives everyone!" << std::endl;
}
