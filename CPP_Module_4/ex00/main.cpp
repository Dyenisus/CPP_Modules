/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:17:49 by yesoytur          #+#    #+#             */
/*   Updated: 2026/04/22 16:17:50 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* j    = new Dog();
	const Animal* i    = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	const WrongAnimal* wMeta = new WrongAnimal();
	const WrongAnimal* wCat  = new WrongCat();
	wCat->makeSound();
	wMeta->makeSound();

	delete meta;
	delete j;
	delete i;
	delete wMeta;
	delete wCat;

	return 0;
}
