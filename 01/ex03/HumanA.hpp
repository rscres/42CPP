/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 18:02:04 by renato            #+#    #+#             */
/*   Updated: 2024/05/15 20:45:21 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"
# include <iostream>

class HumanA {
    private:
        std::string name;
        Weapon &weapon;

    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA(void);
        void attack(void);
};

#endif