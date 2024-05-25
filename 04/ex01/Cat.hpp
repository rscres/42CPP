/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 14:59:33 by renato            #+#    #+#             */
/*   Updated: 2024/05/25 18:07:12 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
    private:
        Brain* _brain;

    public:
        Cat();
        Cat(const Cat& other);
        Cat& operator=(const Cat& other);
        ~Cat();

        void makeSound() const;
        Brain* getBrain() const;
};

#endif // CAT_HPP