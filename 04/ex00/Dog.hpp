/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 18:56:23 by rseelaen          #+#    #+#             */
/*   Updated: 2024/05/24 19:14:01 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
	private:
		std::string _name;
	public:
	    Dog();
		Dog(std::string name);
	    Dog(const Dog& other);
	    Dog& operator=(const Dog& other);
	    ~Dog();
};

#endif // DOG_HPP
