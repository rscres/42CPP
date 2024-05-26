/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 23:47:37 by renato            #+#    #+#             */
/*   Updated: 2024/05/26 01:03:49 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include <ctime>
#include <cmath>

int main()
{
    {
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());

        ICharacter* me = new Character("me");

        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);

        ICharacter* bob = new Character("bob");

        me->use(0, *bob);
        me->use(1, *bob);
        
        delete bob;
        delete me;
        delete src;
    }
    {
		// AMateria materia; // will generate a error
		// ICharacter character; // will generate a error
		AMateria* materias[2];
		materias[0] = new Ice();
		materias[1] = new Cure();

		ICharacter* tifa = new Character("Tifa");
		ICharacter* aerith = new Character("Aerith");

		tifa->equip(materias[0]);
		aerith->equip(materias[1]);

		tifa->use(0, *aerith);
		tifa->use(-42, *aerith);
		tifa->use(42, *aerith);
		aerith->use(0, *tifa);
		aerith->use(-42, *tifa);
		aerith->use(42, *tifa);

		tifa->unequip(0);
		tifa->unequip(42);
		tifa->unequip(-42);
		aerith->unequip(0);
		aerith->unequip(42);
		aerith->unequip(-42);

		tifa->use(0, *aerith);
		tifa->use(42, *aerith);
		tifa->use(-42, *aerith);
		aerith->use(0, *tifa);
		aerith->use(42, *tifa);
		aerith->use(-42, *tifa);

		delete tifa;
		delete aerith;
	}
    {
		srand(time(NULL));

		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* cloud = new Character("Cloud");
		ICharacter* sephiroth = new Character("Sephiroth");

		cloud->equip(src->createMateria("ice"));
		sephiroth->equip(src->createMateria("ice"));
		cloud->equip(src->createMateria("cure"));
		sephiroth->equip(src->createMateria("cure"));

		for (int i = 0; i < 10; i++) {
			cloud->use(rand() % 2, *sephiroth);
			sephiroth->use(rand() % 2, *cloud);
		}

		delete cloud;
		delete sephiroth;
		delete src;
	}
    return 0;
}