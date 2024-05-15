/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 11:38:38 by rseelaen          #+#    #+#             */
/*   Updated: 2024/05/10 11:41:38 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account(int initial_deposit) {
	_nbAccounts++;
	_totalAmount = initial_deposit;
}

Account::~Account(void) {
	_nbAccounts--;
}