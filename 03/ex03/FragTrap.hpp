/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 22:06:43 by renato            #+#    #+#             */
/*   Updated: 2024/05/24 00:02:47 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
    protected:
        const static int _defaultHP = 100;
        const static int _defaultAttackDmg = 30;
    public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(FragTrap const & src);
        ~FragTrap(void);
        FragTrap & operator=(FragTrap const & rhs);

        void highFiveGuys(void);
};

#endif //FRAGTRAP_HPP