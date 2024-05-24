/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 22:06:40 by renato            #+#    #+#             */
/*   Updated: 2024/05/23 22:32:14 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("FragTrap") {
    setHp(100);
    setEnergyPoints(100);
    setAttackDmg(30);
    std::cout << "FragTrap has spawned" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    setHp(100);
    setEnergyPoints(100);
    setAttackDmg(30);
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
    std::cout << "FragTrap " << getName() << " high fives everyone!" << std::endl;
}
