/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 18:01:25 by renato            #+#    #+#             */
/*   Updated: 2024/05/15 20:46:55 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"
# include <iostream>

class HumanB {
    private:
        std::string name;
        Weapon *weapon;

    public:
        HumanB(std::string name);
        ~HumanB(void);
        void setWeapon(Weapon &weapon);
        void attack(void);
};

#endif