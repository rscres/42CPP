/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 18:01:25 by renato            #+#    #+#             */
/*   Updated: 2024/05/16 23:01:00 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"
# include <string>
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