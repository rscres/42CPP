/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 18:56:23 by rseelaen          #+#    #+#             */
/*   Updated: 2024/05/25 12:41:46 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
	public:
	    Dog();
	    Dog(const Dog& other);
	    Dog& operator=(const Dog& other);
	    ~Dog();
		void makeSound() const;
};

#endif // DOG_HPP
