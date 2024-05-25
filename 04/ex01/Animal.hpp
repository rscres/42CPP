/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 18:05:54 by rseelaen          #+#    #+#             */
/*   Updated: 2024/05/25 13:00:50 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

#define RED "\x1b[1;31m"
#define GREEN "\x1b[1;32m"
#define YELLOW "\x1b[1;33m"
#define BLUE "\x1b[1;34m"
#define MAGENTA "\x1b[1;35m"
#define CYAN "\x1b[1;36m"
#define WHITE "\x1b[1;37m"
#define RESET "\033[0m"

class Animal {
	protected:
		std::string _type;
	public:
	    Animal();
		Animal(std::string type);
	    Animal(const Animal& other);
	    Animal& operator=(const Animal& other);
	    virtual ~Animal();
		
		virtual void makeSound() const;
		std::string getType() const;
};

#endif // ANIMAL_HPP
