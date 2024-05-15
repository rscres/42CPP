/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 23:16:20 by renato            #+#    #+#             */
/*   Updated: 2024/05/15 14:23:32 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name ) {
    Zombie *zombieHorde = new Zombie[N];

    for (int i = 0; i < N; i++) {
        zombieHorde[i].setName(name);
        zombieHorde[i].setPosition(i);
    }
    return zombieHorde;
}

void    deleteZombieHorde(Zombie *zombieHorde) {
    delete[] zombieHorde;
}