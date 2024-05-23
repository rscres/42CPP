/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 23:08:23 by renato            #+#    #+#             */
/*   Updated: 2024/05/22 20:53:01 by renato           ###   ########.fr       */
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

    std::cout << "(f != g) " << (f != g) << std::endl;
    std::cout << "(f.getRawBits() != g.getRawBits()) " << (f.getRawBits() != g.getRawBits()) << std::endl;

    std::cout << "(f > g) " << (f > g) << std::endl;
    std::cout << "(f.getRawBits() > g.getRawBits()) " << (f.getRawBits() > g.getRawBits()) << std::endl;

    std::cout << "(f < g) " << (f < g) << std::endl;
    std::cout << "(f.getRawBits() < g.getRawBits()) " << (f.getRawBits() < g.getRawBits()) << std::endl;

    std::cout << "f + g = " << (f + g) << std::endl;
    std::cout << "f - g = " << (f - g) << std::endl;
    std::cout << "f * g = " << (f * g) << std::endl;
    std::cout << "f / g = " << (f / g) << std::endl;

    std::cout << "before: " << h << " after: " << ++h << std::endl;
	std::cout << h.toInt() << std::endl;
	std::cout << h.toFloat() << std::endl;
    std::cout << "before: " << h << " after: " << --h << std::endl;
    std::cout << "before: " << h-- << " after: " << h << std::endl;
    std::cout << "before: " << h++ << " after: " << h << std::endl;

	Fixed i;
	Fixed const j( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << i << std::endl;
	std::cout << ++i << std::endl;
	std::cout << i << std::endl;
	std::cout << i++ << std::endl;
	std::cout << i << std::endl;
	std::cout << j << std::endl;
	std::cout << Fixed::max( i, j ) << std::endl;

    return 0;
}