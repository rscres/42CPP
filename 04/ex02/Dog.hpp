/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 18:56:23 by rseelaen          #+#    #+#             */
/*   Updated: 2024/05/25 21:22:23 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
	private:
		Brain* _brain;

	public:
	    Dog();
	    Dog(const Dog& other);
	    Dog& operator=(const Dog& other);
	    ~Dog();

		void makeSound() const;
		Brain* getBrain() const;
		std::string getIdea(int index) const;
        void setIdea(std::string idea, int index);
};

#endif // DOG_HPP
