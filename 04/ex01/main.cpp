/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rseelaen <rseelaen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 12:28:41 by renato            #+#    #+#             */
/*   Updated: 2024/05/26 11:33:37 by rseelaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
    {
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        delete j;
        delete i;
    }
    std::cout << "---------------------" << std::endl;
    {
        Dog* j = new Dog();
        Cat* i = new Cat();
        Dog* j_copy = new Dog(*j);
        Cat* i_copy = new Cat(*i);

        std::cout << "i address: " << i << std::endl;
        std::cout << "i_copy address: " << i_copy << std::endl;
        std::cout << "j address: " << j << std::endl;
        std::cout << "j_copy address: " << j_copy << std::endl;

        delete j_copy;
        delete i_copy;
        delete j;
        delete i;
    }
    std::cout << "---------------------" << std::endl;
    {
        Dog* dog = new Dog();
        for (int i = 0; i < 5; i++)
            dog->getBrain()->setIdea("Idea", i);
        std::cout << "---------------------" << std::endl;
        Dog* dog2 = new Dog(*dog);
        std::cout << "---------------------" << std::endl;
        for (int i = 0; i < 5; i++)
            std::cout << "dog2 " << i << " " << dog2->getBrain()->getIdea(i) << std::endl;
        std::cout << "---------------------" << std::endl;
        for (int i = 0; i < 5; i++)
            std::cout << "dog " << i << " " << dog->getBrain()->getIdea(i) << std::endl;
        std::cout << "---------------------" << std::endl;
        dog2->getBrain()->setIdea("Fooood!!1!", 0);
        dog2->getBrain()->setIdea("Plaaaay!!1!!", 1);
        for (int i = 0; i < 5; i++)
            std::cout << "dog2 " << i << " " << dog2->getBrain()->getIdea(i) << std::endl;
        std::cout << "---------------------" << std::endl;

        delete dog;
        std::cout << "---------------------" << std::endl;
        delete dog2;
    }
    std::cout << "---------------------" << std::endl;
    {
        Animal *animals = new Animal[10];
        std::cout << "---------------------" << std::endl;
        for (int i = 0; i < 5; i++)
            animals[i] = Dog();
        std::cout << "---------------------" << std::endl;
        for (int i = 5; i < 10; i++)
            animals[i] = Cat();
        std::cout << "---------------------" << std::endl;
        for (int i = 0; i < 10; i++)
            std::cout << animals[i].getType() << std::endl;
        std::cout << "---------------------" << std::endl;
        delete[] animals;
    }
    return 0;
}