/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:08:59 by rseelaen          #+#    #+#             */
/*   Updated: 2024/05/24 16:53:48 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void) {
	DiamondTrap diamond("Diamond");
	diamond.whoAmI();
	// std::cout << "Diamond's HP: " << diamond.getHp() << std::endl;
	// std::cout << "Diamond's energy points: " << diamond.getEnergyPoints() << std::endl;
	// std::cout << "Diamond's attack damage: " << diamond.getAttackDmg() << std::endl;
	diamond.attack("rat");
	ClapTrap clapTrap("Best boy");
	ScavTrap scavTrap("Scavy");
	FragTrap fragTrap("Frags");
	clapTrap.attack("rat");
	scavTrap.attack("rat");
	fragTrap.attack("rat");
	return 0;
}