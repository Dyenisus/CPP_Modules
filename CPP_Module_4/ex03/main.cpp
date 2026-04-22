/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:36:29 by yesoytur          #+#    #+#             */
/*   Updated: 2026/04/22 16:36:30 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int main() {
	std::cout << "--- Subject example ---" << std::endl;
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

	std::cout << std::endl << "--- Copy Character test ---" << std::endl;
	Character* alice = new Character("alice");
	AMateria* iceMat = new Ice();
	alice->equip(iceMat);

	Character* aliceCopy = new Character(*alice);
	aliceCopy->use(0, *alice);

	delete alice;
	delete aliceCopy;

	std::cout << std::endl << "--- Unequip test (no double-free) ---" << std::endl;
	Character* hero = new Character("hero");
	AMateria* cure1 = new Cure();
	hero->equip(cure1);
	AMateria* unequipped = cure1;
	hero->unequip(0);
	delete hero;
	delete unequipped;

	std::cout << std::endl << "--- Out-of-bounds use test ---" << std::endl;
	Character* test = new Character("test");
	test->use(-1, *test);
	test->use(4, *test);
	test->use(0, *test);
	delete test;

	std::cout << std::endl << "--- Unknown materia type test ---" << std::endl;
	IMateriaSource* src2 = new MateriaSource();
	src2->learnMateria(new Ice());
	AMateria* unknown = src2->createMateria("fire");
	if (!unknown)
		std::cout << "createMateria(\"fire\") returned NULL as expected" << std::endl;
	delete src2;

	return 0;
}
