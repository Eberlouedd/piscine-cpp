/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:47:55 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/18 00:51:10 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

void	test_materia(AMateria *materia)
{
	AMateria *cloneMateria;

	cloneMateria = materia->clone();

	std::cout << std::endl << "Original's Adress: " << materia << std::endl;
	std::cout << "Clone's Adress: " << cloneMateria << std::endl << std::endl;
	delete cloneMateria;
}

void	test_character(ICharacter *character, Character const& tom)
{
	ICharacter* bob = new Character("bob");

	character->show_inventory();

	std::cout << std::endl;

	character->unequip(1);
	character->unequip(3);
	character->unequip(4);

	std::cout << std::endl;

	character->show_inventory();

	std::cout << std::endl;

	character->use(0, *bob);
	character->use(1, *bob);
	character->use(2, *bob);
	character->use(3, *bob);
	character->use(4, *bob);

	std::cout << std::endl;

	delete bob;

	std::cout << std::endl;

	Character billy(tom);

	std::cout << std::endl << "Tom's real name: " << tom.getName() << std::endl;
	std::cout << "Tom's real inventory:";
	tom.show_inventory();


	std::cout << std::endl << "Billy's fake name: " << billy.getName() << std::endl;
	std::cout << "Billy's fake inventory:";
	billy.show_inventory();

	std::cout << std::endl;
}

void	test_materiaSource(void)
{
	MateriaSource test;
	std::cout << std::endl << "test materiaSource inventory is empty:";
	test.show_inventory();

	std::cout << std::endl;

	test.learnMateria(new Cure());
	test.learnMateria(new Ice());

	std::cout << std::endl << "test materiaSource inventory:";
	test.show_inventory();

	std::cout << std::endl;

	MateriaSource copy(test);

	std::cout << std::endl << "copy materiaSource inventory:" << std::endl;

	copy.show_inventory();

	std::cout << std::endl;
}

int	main(void)
{
	IMateriaSource* src = new MateriaSource();
	std::cout << std::endl;

	src->learnMateria(new Ice());

	std::cout << std::endl;

	src->learnMateria(new Cure());

	std::cout << std::endl;

	ICharacter* me = new Character("me");
	AMateria *ice1, *cure1;

	std::cout << std::endl;

	ice1 = src->createMateria("ice");

	std::cout << std::endl;

	test_materia(ice1);

	std::cout << std::endl;

	me->equip(ice1);
	me->equip(ice1);

	std::cout << std::endl;

	cure1 = src->createMateria("cure");

	std::cout << std::endl;

	test_materia(cure1);

	std::cout << std::endl;
	me->equip(cure1);
	me->equip(cure1);
	me->equip(NULL);

	std::cout << std::endl;

	Character tom("Tom");

	std::cout << std::endl;

	tom.equip(cure1->clone());
	tom.equip(ice1->clone());

	std::cout << std::endl;

	test_character(me, tom);

	std::cout << std::endl;

	test_materiaSource();

	std::cout << std::endl;

	delete me;

	std::cout << std::endl;
	delete src;

	std::cout << std::endl;
	return (0);
}