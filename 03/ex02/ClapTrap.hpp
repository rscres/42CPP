/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:09:02 by rseelaen          #+#    #+#             */
/*   Updated: 2024/05/24 15:52:43 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

#define RED "\x1b[31m"
#define GREEN "\x1b[1;32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[1;34m"
#define MAGENTA "\x1b[1;35m"
#define CYAN "\x1b[36m"
#define WHITE "\x1b[37m"
#define RESET "\033[0m"
#define BOLD "\033[1m"

class ClapTrap {
	protected:
		std::string _name;
		int _hp;
		int _energyPoints;
		int _attackDmg;

	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		~ClapTrap(void);
		ClapTrap & operator=(ClapTrap const & rhs);
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string getName(void) const;
		int getHp(void) const;
		int getEnergyPoints(void) const;
		int getAttackDmg(void) const;

};

#endif //CLAPTRAP_HPP