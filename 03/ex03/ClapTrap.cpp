/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:15:22 by rseelaen          #+#    #+#             */
/*   Updated: 2024/05/24 16:48:23 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	_name = "Bot with no name";
	_hp = 10;
	_energyPoints = 10;
	_attackDmg = 0;
	std::cout << BLUE "ClapTrap " RESET << _name << " has been created" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	_name = name;
	_hp = 10;
	_energyPoints = 10;
	_attackDmg = 0;
	std::cout << BLUE "ClapTrap " RESET << _name << " has been created" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	this->operator=(src);
	std::cout << BLUE "ClapTrap " RESET << _name << " has been copied" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs) {
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDmg = rhs._attackDmg;
	std::cout << BLUE "ClapTrap " RESET << _name << " has been copy assigned" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap(void) {
	std::cout << BLUE "ClapTrap " RESET << _name << " has been destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (_hp <= 0) {
		std::cout << BLUE "ClapTrap " RESET << _name << " has no health left!" <<std::endl;
		return;
	}
	if (_energyPoints == 0) {
		std::cout << BLUE "ClapTrap " RESET << _name << " has no energy to attack!" <<std::endl;
		return;
	}
	_energyPoints--;
	std::cout << BLUE "ClapTrap " RESET << _name << " attacks " << target << " for " << _attackDmg
			  << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_hp <= 0) {
		std::cout << BLUE "ClapTrap " RESET << _name << " has no health left!" <<std::endl;
		return;
	}
	_hp -= amount;
	std::cout << BLUE "ClapTrap " RESET << _name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_hp <= 0) {
		std::cout << BLUE "ClapTrap " RESET << _name << " has no health left!" <<std::endl;
		return;
	}
	if (_energyPoints == 0) {
		std::cout << BLUE "ClapTrap " RESET << _name << " has no energy to repair itself!" <<std::endl;
		return;
	}
	_hp += amount;
	_energyPoints--;
	std::cout << BLUE "ClapTrap " RESET << _name << " repairs itself for " << amount
			  << " health points." << std::endl;
}

std::string ClapTrap::getName(void) const {
	return _name;
}

int ClapTrap::getHp(void) const {
	return _hp;
}

int ClapTrap::getEnergyPoints(void) const {
	return _energyPoints;
}

int ClapTrap::getAttackDmg(void) const {
	return _attackDmg;
}
