/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 23:08:13 by renato            #+#    #+#             */
/*   Updated: 2024/05/22 20:41:26 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

//CONSTRUCTORS------------

Fixed::Fixed(void) : value(0) {
    // std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::Fixed(Fixed const & src) {
    // std::cout << "Copy constructor called" << std::endl;
    this->operator=(src);
}

Fixed::Fixed(int const value) {
	// std::cout << "Int constructor called" << std::endl;
	this->value = value << fractionalBits;
}

Fixed::Fixed(float const value) {
	// std::cout << "Float constructor called" << std::endl;
	this->value = roundf(value * (1 << fractionalBits));
}

Fixed & Fixed::operator=(Fixed const & rhs) {
    // std::cout << "Copy assignnment operator called" << std::endl;
    setRawBits(rhs.getRawBits());
    return *this;
}

//DESTRUCTOR----------------

Fixed::~Fixed(void) {
    // std::cout << "Destructor called" << std::endl;
}


//OVERLOAD OPERATORS---------

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
    o << rhs.toFloat();
    return o;
}

Fixed &Fixed::operator++(void) {
	this->value += 1 << fractionalBits;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
    operator++();
	return tmp;
}

Fixed &Fixed::operator--(void) {
	this->value -= 1 << fractionalBits;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
    operator--();
	return tmp;
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

Fixed operator+(Fixed const & a, Fixed const & b) {
	Fixed result;
	result.setRawBits(a.getRawBits() + b.getRawBits());
	return result;
}

Fixed operator-(Fixed const & a, Fixed const & b) {
	Fixed result;
	result.setRawBits(a.getRawBits() - b.getRawBits());
	return result;
}

Fixed operator*(Fixed const & a, Fixed const & b) {
	return Fixed(a.toFloat() * b.toFloat());
}

Fixed operator/(Fixed const & a, Fixed const & b) {
	if (b.getRawBits() == 0.0f) {
		std::cout << "Can't divide by 0" << std::endl;
		return Fixed(0);
	}
	return Fixed(a.toFloat() / b.toFloat());
}

//MEMBER FUNCTIONS-----------------------

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

Fixed & Fixed::min(Fixed & a, Fixed & b) {
    return a.getRawBits() < b.getRawBits() ? a : b;
}

const Fixed & Fixed::min(Fixed const & a, Fixed const & b) {
    return a.getRawBits() < b.getRawBits() ? a : b;
}

Fixed & Fixed::max(Fixed & a, Fixed & b) {
    return a.getRawBits() > b.getRawBits() ? a : b;
}

const Fixed & Fixed::max(Fixed const & a, Fixed const & b) {
    return a.getRawBits() > b.getRawBits() ? a : b;
}