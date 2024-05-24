/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:08:59 by rseelaen          #+#    #+#             */
/*   Updated: 2024/05/23 23:58:41 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void) {
	ClapTrap clapTrap("Best boy");
	ScavTrap scavTrap("Scav boy");
	std::cout << "scavTrap's HP: " << scavTrap.getHp() << std::endl;
	std::cout << "scavTrap's energy points: " << scavTrap.getEnergyPoints() << std::endl;
	std::cout << "scavTrap's attack damage: " << scavTrap.getAttackDmg() << std::endl;
	clapTrap.attack("rat");
	clapTrap.takeDamage(10);
	clapTrap.beRepaired(5);
	scavTrap.attack("rat");
	scavTrap.guardGate();
	FragTrap fragTrap("Fraggy");
	fragTrap.highFiveGuys();
	fragTrap.attack(clapTrap.getName());
	clapTrap.takeDamage(fragTrap.getAttackDmg());
	DiamondTrap diamond("Diamond");
	diamond.whoAmI();
	std::cout << "Diamond's HP: " << diamond.getHp() << std::endl;
	std::cout << "Diamond's energy points: " << diamond.getEnergyPoints() << std::endl;
	std::cout << "Diamond's attack damage: " << diamond.getAttackDmg() << std::endl;
	diamond.attack("rat");
	return 0;
}