/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:08:59 by rseelaen          #+#    #+#             */
/*   Updated: 2024/05/23 22:03:47 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <ctime>

namespace tests {
	void round(ScavTrap& attacker, ScavTrap& adversary) {
		switch (rand() % 3) {
			case 0:
				attacker.attack(adversary.getName());
				adversary.takeDamage(attacker.getAttackDmg());
				break;
			case 1:
				attacker.beRepaired(rand() % 10 + 1);
				break;
			case 2:
				attacker.guardGate();
		}
	}

	void fight(ScavTrap& scavA, ScavTrap& scavB) {
		std::srand(std::time(NULL));
		while (scavA.getHp() > 0 && scavB.getHp() > 0
			&& scavA.getEnergyPoints() > 0 && scavB.getEnergyPoints() > 0
		) {
			switch (rand() % 2) {
				case 0:
					round(scavA, scavB);
					break;
				case 1:
					round(scavB, scavA);
			}
		}
	}
}

int main(void) {
	ScavTrap scav_trap("Maya");
	ScavTrap sc4v_7r4p;
	ScavTrap sc4v_7r4p2(scav_trap);

	sc4v_7r4p.setName("Zer0");
	sc4v_7r4p2.setName("Handsome Jack");
	tests::fight(scav_trap, sc4v_7r4p);
	scav_trap.setHp(100);
	scav_trap.setEnergyPoints(50);
	std::cout << std::endl;
	tests::fight(scav_trap, sc4v_7r4p2);
	sc4v_7r4p.setHp(100);
	sc4v_7r4p2.setHp(100);
	sc4v_7r4p.setEnergyPoints(50);
	sc4v_7r4p2.setEnergyPoints(50);
	std::cout << std::endl;
	tests::fight(sc4v_7r4p, sc4v_7r4p2);
}

// int main(void) {
// 	ClapTrap clapTrap("Best boy");
// 	ScavTrap scavTrap("Scav boy");
// 	clapTrap.attack("rat");
// 	clapTrap.takeDamage(10);
// 	clapTrap.beRepaired(5);
// 	scavTrap.attack("rat");
// 	scavTrap.guardGate();
// 	return 0;
// }