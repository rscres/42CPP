/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 23:08:16 by renato            #+#    #+#             */
/*   Updated: 2024/05/21 18:52:09 by rseelaen         ###   ########.fr       */
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
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);
bool operator==(Fixed const & a, Fixed const & b);
bool operator!=(Fixed const & a, Fixed const & b);
bool operator>=(Fixed const & a, Fixed const & b);
bool operator<=(Fixed const & a, Fixed const & b);
bool operator<(Fixed const & a, Fixed const & b);
bool operator>(Fixed const & a, Fixed const & b);



#endif