/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 18:56:23 by rseelaen          #+#    #+#             */
/*   Updated: 2024/05/25 18:07:33 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain* _brain;

	public:
	    Dog();
	    Dog(const Dog& other);
	    Dog& operator=(const Dog& other);
	    ~Dog();

		void makeSound() const;
		Brain* getBrain() const;
};

#endif // DOG_HPP
