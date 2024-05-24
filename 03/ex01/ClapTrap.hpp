/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:09:02 by rseelaen          #+#    #+#             */
/*   Updated: 2024/05/23 20:59:26 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	private:
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
		
		void setName(std::string name);
		void setHp(int hp);
		void setEnergyPoints(int energyPoints);
		void setAttackDmg(int attackDmg);

		std::string getName(void) const;
		int getHp(void) const;
		int getEnergyPoints(void) const;
		int getAttackDmg(void) const;

};

#endif //CLAPTRAP_HPP