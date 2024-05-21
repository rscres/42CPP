/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 23:08:13 by renato            #+#    #+#             */
/*   Updated: 2024/05/21 18:50:54 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

//CONSTRUCTORS------------

Fixed::Fixed(void) : value(0) {
    std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::Fixed(Fixed const & src) {
    std::cout << "Copy constructor called" << std::endl;
    this->operator=(src);
}

Fixed::Fixed(int const value) {
	std::cout << "Int constructor called" << std::endl;
	this->value = value << fractionalBits;
}

Fixed::Fixed(float const value) {
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(value * (1 << fractionalBits));
}

Fixed & Fixed::operator=(Fixed const & rhs) {
    std::cout << "Copy assignnment operator called" << std::endl;
    setRawBits(rhs.getRawBits());
    return *this;
}

//DESTRUCTOR----------------

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}


//OVERLOAD OPERATORS---------

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
    o << rhs.toFloat();
    return o;
}

bool operator==(Fixed const & a, Fixed const & b) {
	return a.getRawBits() == b.getRawBits();
}

bool operator!=(Fixed const & a, Fixed const & b) {
	return a.getRawBits() != b.getRawBits();
}

bool operator>=(Fixed const & a, Fixed const & b) {
	return a.getRawBits() >= b.getRawBits();
}

bool operator<=(Fixed const & a, Fixed const & b) {
	return a.getRawBits() <= b.getRawBits();
}

bool operator>(Fixed const & a, Fixed const & b) {
	return a.getRawBits() > b.getRawBits();
}

bool operator<(Fixed const & a, Fixed const & b) {
	return a.getRawBits() < b.getRawBits();
}

int Fixed::getRawBits( void ) const {
    return value;
}

void Fixed::setRawBits(int const raw) {
    this->value = raw;
}

float Fixed::toFloat(void) const {
    return static_cast<float>(getRawBits()) / (1 << fractionalBits);
}

int Fixed::toInt(void) const {
    return (int)getRawBits() >> fractionalBits;
}