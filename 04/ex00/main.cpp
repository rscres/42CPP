/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 12:28:41 by renato            #+#    #+#             */
/*   Updated: 2024/05/25 13:07:49 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main(void) {
    const Animal* a = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << "Type: " << a->getType() << " " << std::endl;
    a->makeSound();
    std::cout << "---------------------" << std::endl;
    std::cout << "Type: " << j->getType() << " " << std::endl;
    j->makeSound();
    std::cout << "---------------------" << std::endl;
    std::cout << "Type: " << i->getType() << " " << std::endl;
    i->makeSound();
    std::cout << "---------------------" << std::endl;
    delete a;
    std::cout << "---------------------" << std::endl;
    delete j;
    std::cout << "---------------------" << std::endl;
    delete i;
    std::cout << "---------------------" << std::endl;

    const WrongAnimal* wi = new WrongCat();
    std::cout << "Type: " << wi->getType() << " " << std::endl;
    wi->makeSound();
    delete wi;
    std::cout << "---------------------" << std::endl;
    const WrongAnimal & wc = WrongCat();
    std::cout << "Type: " << wc.getType() << " " << std::endl;
    wc.makeSound();
    std::cout << "---------------------" << std::endl;
    const Animal & k = Dog();
    std::cout << "Type: " << k.getType() << " " << std::endl;
    k.makeSound();
    std::cout << "---------------------" << std::endl;
    const Animal h = Dog();
    std::cout << "Type: " << h.getType() << " " << std::endl;
    h.makeSound();
    
    return 0;
}