/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 23:08:16 by renato            #+#    #+#             */
/*   Updated: 2024/05/22 20:34:46 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <ostream>

class Fixed {
    private:
        int value;
        static const int fractionalBits = 8;

    public:
        Fixed(void);
        Fixed(int const value);
        Fixed(float const value);
        Fixed(Fixed const & src);
        ~Fixed(void);
        Fixed & operator=(Fixed const & rhs);
		Fixed & operator++(void);
        Fixed operator++(int);
        Fixed & operator--(void);
        Fixed operator--(int);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
        static Fixed & min(Fixed & a, Fixed & b);
        static const Fixed & min(Fixed const & a, Fixed const & b);
        static Fixed & max(Fixed & a, Fixed & b);
        static const Fixed & max(Fixed const & a, Fixed const & b);
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);
bool operator==(Fixed const & a, Fixed const & b);
bool operator!=(Fixed const & a, Fixed const & b);
bool operator>=(Fixed const & a, Fixed const & b);
bool operator<=(Fixed const & a, Fixed const & b);
bool operator<(Fixed const & a, Fixed const & b);
bool operator>(Fixed const & a, Fixed const & b);
Fixed operator+(Fixed const & a, Fixed const & b);
Fixed operator-(Fixed const & a, Fixed const & b);
Fixed operator*(Fixed const & a, Fixed const & b);
Fixed operator/(Fixed const & a, Fixed const & b);

#endif