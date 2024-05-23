/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:43:33 by rseelaen          #+#    #+#             */
/*   Updated: 2024/05/23 12:52:33 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
	private :
		Fixed x;
		Fixed y;

	public :
		Point();
		~Point();
		Point(float x, float y);
		void setX(float x);
		void setY(float y);
		Fixed & getX(void);
		Fixed & getY(void);
};

#endif //POINT_HPP