/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 23:08:23 by renato            #+#    #+#             */
/*   Updated: 2024/05/23 11:47:57 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) {
    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );
	Fixed e( 5.32f );

    a = Fixed( 1234.4321f );

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << "b == c : " << (b == c) << std::endl;
	std::cout << "b == d : " << (b == d) << std::endl;
	std::cout << "b >= c : " << (b >= c) << std::endl;
	std::cout << "b <= c : " << (b <= c) << std::endl;
	std::cout << "b < c  : " << (b < c) << std::endl;
	std::cout << "b > c  : " << (b > c) << std::endl;
	std::cout << "b + c  : " << (b + c) << std::endl;
	std::cout << "b - c  : " << (b - c) << std::endl;
	std::cout << "b * c  : " << (b * c) << std::endl;
	std::cout << "b / c  : " << (c / b) << std::endl;
	std::cout << "before: " << e << " after: " << ++e << std::endl;
	std::cout << "before: " << e << " after: " << --e << std::endl;
	std::cout << "before: " << e-- << " after: " << e << std::endl;
	std::cout << "before: " << e++ << " after: " << e << std::endl;
    
    Fixed f(10.5f);
    Fixed g(5.5f);
    Fixed h;

    std::cout << "f is " << f << std::endl;
    std::cout << "g is " << g << std::endl;
    std::cout << "h is " << h << std::endl;

    std::cout << "f != g : " << (f != g) << std::endl;
    std::cout << "f > g  : " << (f > g) << std::endl;
    std::cout << "f < g  : " << (f < g) << std::endl;
    std::cout << "f + g = " << (f + g) << std::endl;
    std::cout << "f - g = " << (f - g) << std::endl;
    std::cout << "f * g = " << (f * g) << std::endl;
    std::cout << "f / g = " << (f / g) << std::endl;

    std::cout << "[++h]before: " << h << " after: " << ++h << std::endl;
	std::cout << "h.toInt()  : " << h.toInt() << std::endl;
	std::cout << "h.toFloat():" << h.toFloat() << std::endl;
    std::cout << "[--h]before: " << h << " after: " << --h << std::endl;
    std::cout << "[h--]before: " << h-- << " after: " << h << std::endl;
    std::cout << "[h++]before: " << h++ << " after: " << h << std::endl;

	Fixed i;
	Fixed const j( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "i  : " << i << std::endl;
	std::cout << "++i: " << ++i << std::endl;
	std::cout << "i  : " << i << std::endl;
	std::cout << "i++: " << i++ << std::endl;
	std::cout << "i  : " << i << std::endl;
	std::cout << "j  : " << j << std::endl;
	std::cout << "Max(i, j): " << Fixed::max( i, j ) << std::endl;
	std::cout << "Min(i, j): " << Fixed::min( i, j ) << std::endl;

    return 0;
}