/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 18:05:54 by rseelaen          #+#    #+#             */
/*   Updated: 2024/05/24 19:08:08 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {
	private:
		std::string _type;
	public:
	    Animal();
		Animal(std::string type);
	    Animal(const Animal& other);
	    Animal& operator=(const Animal& other);
	    ~Animal();
};

#endif // ANIMAL_HPP
