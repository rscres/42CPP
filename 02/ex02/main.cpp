/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 23:08:23 by renato            #+#    #+#             */
/*   Updated: 2024/05/22 18:13:02 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) {
    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );
	Fixed e( 5 );

    a = Fixed( 1234.4321f );

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << (b == c) << std::endl;
	std::cout << (b.getRawBits() == c.getRawBits()) << std::endl;
	std::cout << (b == d) << std::endl;
	std::cout << (b.getRawBits() == d.getRawBits()) << std::endl;
	std::cout << (b >= c) << std::endl;
	std::cout << (b.getRawBits() >= c.getRawBits()) << std::endl;
	std::cout << (b <= c) << std::endl;
	std::cout << (b.getRawBits() <= c.getRawBits()) << std::endl;
	std::cout << (b < c) << std::endl;
	std::cout << (b.getRawBits() < c.getRawBits()) << std::endl;
	std::cout << (b + c) << std::endl;
	std::cout << (b - c) << std::endl;
	std::cout << (b * c) << std::endl;
	std::cout << (c / b) << std::endl;
	std::cout << "before: " << e << "after: " << ++e << std::endl;
    
    return 0;
}