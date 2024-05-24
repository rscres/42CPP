/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 22:06:40 by renato            #+#    #+#             */
/*   Updated: 2024/05/23 22:20:05 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("FragTrap") {
    setHp(100);
    setEnergyPoints(100);
    setAttackDmg(30);
    std::cout << "FragTrap default constructor" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    setHp(100);
    setEnergyPoints(100);
    setAttackDmg(30);
    std::cout << "FragTrap name constructor" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src) {
    std::cout << "FragTrap copy constructor" << std::endl;
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
