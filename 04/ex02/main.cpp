/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 12:28:41 by renato            #+#    #+#             */
/*   Updated: 2024/05/25 21:36:39 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>
#include <sstream>

int main()
{
    {
        // const AAnimal* k = new AAnimal();
        const AAnimal* j = new Dog();
        const AAnimal* i = new Cat();
        delete j;
        delete i;
    }
    std::cout << "---------------------" << std::endl;
    {
        Dog* dog = new Dog();
        std::cout << "---------------------" << std::endl;
        for (int i = 0; i < 100; i++) {
            if (i == 49 || i == 99)
                dog->setIdea("Sleep", i);
            else if (i % 2 == 0)
                dog->setIdea("Fooood!!1!", i);
            else
                dog->setIdea("Plaaaay!!1!!", i);
        } 
        std::cout << "---------------------" << std::endl;
        for (int i = 0; i < 100; i++) {
            std::cout << dog->getIdea(i) << std::endl;
        }
        delete dog;
    }
    std::cout << "---------------------" << std::endl;
    {
        // AAnimal *animals = new Cat[10];
        Cat *animals = new Cat[10];
        std::cout << "---------------------" << std::endl;
        for (int i = 0; i < 10; i++)
            std::cout << animals[i].getType() << std::endl;
        std::cout << "---------------------" << std::endl;
        delete[] animals;
    }
    return 0;
}

// int main() {
//     {
//         // Mandatory tests
//         std::cout << "Mandatory tests:" << std::endl;
//         const AAnimal* dogPtr = new Dog();
//         const AAnimal* catPtr = new Cat();

//         delete dogPtr;  // should not create a leak
//         delete catPtr;
//         std::cout << std::endl;
//     }
//     {
//         // Mandatory tests
//         std::cout << "My tests:" << std::endl;
//         Cat* catPtr = new Cat();
//         catPtr->setIdea("Catch a mouse", 0);
//         std::cout << "Cat's idea at index 0: " << catPtr->getIdea(0) << std::endl;
//         std::cout << std::endl;

//         for (int i = 0; i < 100; i++) {
//             std::ostringstream oss;
//             oss << i;
//             std::string str = oss.str();
//             if (i == 1)
//                 catPtr->setIdea("Catch " + str + " mouse", i);
//             else
//                 catPtr->setIdea("Catch " + str + " mice", i);
//         }
//         for (int i = 0; i < 100; i++) {
//             std::ostringstream oss;
//             oss << i;
//             std::string str = oss.str();
//             std::cout << "Cat's idea at index " + str + ": " << catPtr->getIdea(i) << std::endl;
//         }

//         delete catPtr;
//     }
//     return 0;
// }