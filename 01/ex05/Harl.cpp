/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 20:59:07 by renato            #+#    #+#             */
/*   Updated: 2024/05/16 22:02:24 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl(void) {
    return ;
}

Harl::~Harl(void) {
    return ;
}

void Harl::debug(void) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

t_levels resolveLevels(std::string level) {
    return  level == "DEBUG" ? DEBUG :
            level == "INFO" ? INFO :
            level == "WARNING" ? WARNING :
            level == "ERROR" ? ERROR : INVALID;
}

void Harl::complain(std::string level) {
    t_levels option = resolveLevels(level);
    switch (option) {
        case DEBUG:
            this->debug();
            break;
        case INFO:
            this->info();
            break;
        case WARNING:
            this->warning();
            break;
        case ERROR:
            this->error();
            break;
        default:
            std::cout << "I don't even know how to complain about that." << std::endl;
    }
}