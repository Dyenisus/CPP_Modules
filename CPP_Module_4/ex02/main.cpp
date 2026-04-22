/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:35:25 by yesoytur          #+#    #+#             */
/*   Updated: 2026/04/22 16:35:26 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	std::cout << "--- Array test ---" << std::endl;
	const Animal* animals[10];
	for (int i = 0; i < 5; i++)
		animals[i] = new Dog();
	for (int i = 5; i < 10; i++)
		animals[i] = new Cat();

	std::cout << std::endl << "--- Delete array ---" << std::endl;
	for (int i = 0; i < 10; i++)
		delete animals[i];

	std::cout << std::endl << "--- Deep copy test ---" << std::endl;
	Dog original;
	original.getBrain()->setIdea(0, "Chase the ball");
	Dog copy(original);

	std::cout << "Original idea[0]: " << original.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copy idea[0]:     " << copy.getBrain()->getIdea(0) << std::endl;

	original.getBrain()->setIdea(0, "Sleep all day");
	std::cout << "After modifying original:" << std::endl;
	std::cout << "Original idea[0]: " << original.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copy idea[0]:     " << copy.getBrain()->getIdea(0) << std::endl;

	return 0;
}
