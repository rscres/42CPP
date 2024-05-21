/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 20:59:07 by renato            #+#    #+#             */
/*   Updated: 2024/05/20 22:21:46 by renato           ###   ########.fr       */
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

typedef void (Harl::*t_funcPtr)(void);

t_levels resolveLevels(std::string level) {
    return  level == "DEBUG" ? DEBUG :
            level == "INFO" ? INFO :
            level == "WARNING" ? WARNING :
            level == "ERROR" ? ERROR : INVALID;
}

void Harl::complain(std::string level) {
    t_levels option = resolveLevels(level);
    t_funcPtr funcPtr = NULL;

    switch (option) {
        case DEBUG:
            funcPtr = &Harl::debug;
            break;
        case INFO:
            funcPtr = &Harl::info;
            break;
        case WARNING:
            funcPtr = &Harl::warning;
            break;
        case ERROR:
            funcPtr = &Harl::error;
            break;
        default:
            std::cout << "I don't even know how to complain about that." << std::endl;
            return;
    }

    (this->*funcPtr)();
}