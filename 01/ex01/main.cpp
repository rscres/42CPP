/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 21:26:49 by renato            #+#    #+#             */
/*   Updated: 2024/05/15 14:31:56 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	int znum = 5;

    Zombie *horde = zombieHorde(znum, "Mob");
	for (int i = 0; i < znum; i++) {
		horde[i].announce();
	}
    deleteZombieHorde(horde);
    return (0);
}