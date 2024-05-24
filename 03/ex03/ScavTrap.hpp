/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:42:08 by rseelaen          #+#    #+#             */
/*   Updated: 2024/05/24 00:03:00 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {
    protected:
        const static int _defaultHP = 100;
        const static int _defaultEnergyPoints = 50;
        const static int _defaultAttackDmg = 20;
    public:
        ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const & src);
        ~ScavTrap(void);
        ScavTrap & operator=(ScavTrap const & rhs);

        void guardGate(void);
        void attack(const std::string& target);
};

#endif //SCAVTRAP_HPP