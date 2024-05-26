/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 18:05:54 by rseelaen          #+#    #+#             */
/*   Updated: 2024/05/25 20:30:15 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>

#define RED "\x1b[1;31m"
#define GREEN "\x1b[1;32m"
#define YELLOW "\x1b[1;33m"
#define BLUE "\x1b[1;34m"
#define MAGENTA "\x1b[1;35m"
#define CYAN "\x1b[1;36m"
#define WHITE "\x1b[1;37m"
#define RESET "\033[0m"

class AAnimal {
	protected:
		std::string _type;
	public:
	    AAnimal();
		AAnimal(std::string type);
	    AAnimal(const AAnimal& other);
	    AAnimal& operator=(const AAnimal& other);
	    virtual ~AAnimal();
		
		virtual void makeSound() const = 0;
		std::string getType() const;
};

#endif // AANIMAL_HPP
