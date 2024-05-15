/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 14:03:00 by rseelaen          #+#    #+#             */
/*   Updated: 2024/05/15 14:03:03 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[]) { if (argc <= 1) { std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl; return 0; } for (int i = 1; i < argc; i++) { for (char *str = argv[i]; *str; str++) std::cout << (char)toupper(*str); } std::cout << std::endl; return 0; }