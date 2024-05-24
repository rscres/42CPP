/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:08:59 by rseelaen          #+#    #+#             */
/*   Updated: 2024/05/23 22:21:28 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
	ClapTrap clapTrap("Best boy");
	ScavTrap scavTrap("Scav boy");
	clapTrap.attack("rat");
	clapTrap.takeDamage(10);
	clapTrap.beRepaired(5);
	scavTrap.attack("rat");
	scavTrap.guardGate();
	FragTrap fragTrap("Fraggy");
	fragTrap.highFiveGuys();
	return 0;
}