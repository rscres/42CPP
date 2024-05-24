/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:08:59 by rseelaen          #+#    #+#             */
/*   Updated: 2024/05/24 16:48:50 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
	ClapTrap clapTrap("Best boy");
	FragTrap fragTrap("Fraggy");
	fragTrap.attack(clapTrap.getName());
	clapTrap.takeDamage(fragTrap.getAttackDmg());
	fragTrap.attack(clapTrap.getName());
	clapTrap.takeDamage(fragTrap.getAttackDmg());
	fragTrap.highFiveGuys();
	return 0;
}