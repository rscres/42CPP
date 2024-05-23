/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:08:59 by rseelaen          #+#    #+#             */
/*   Updated: 2024/05/23 17:38:10 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
	ClapTrap clapTrap;
	ClapTrap clapTrap2("Best boy");
	clapTrap.attack("rat");
	clapTrap.takeDamage(3);
	clapTrap.beRepaired(2);
	ClapTrap ct3(clapTrap2);
	for (int i = 0; i <= 10; i++) {
		clapTrap2.attack("rat");
	}
	return 0;
}