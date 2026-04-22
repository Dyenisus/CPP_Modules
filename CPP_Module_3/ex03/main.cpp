/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:01:15 by yesoytur          #+#    #+#             */
/*   Updated: 2026/04/22 16:01:16 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	std::cout << "--- Construction ---" << std::endl;
	DiamondTrap dt("Bob");

	std::cout << std::endl << "--- whoAmI ---" << std::endl;
	dt.whoAmI();

	std::cout << std::endl << "--- attack ---" << std::endl;
	dt.attack("enemy");

	std::cout << std::endl << "--- guardGate ---" << std::endl;
	dt.guardGate();

	std::cout << std::endl << "--- highFivesGuys ---" << std::endl;
	dt.highFivesGuys();

	std::cout << std::endl << "--- takeDamage / beRepaired ---" << std::endl;
	dt.takeDamage(20);
	dt.beRepaired(10);

	std::cout << std::endl << "--- Copy ---" << std::endl;
	DiamondTrap dt2(dt);
	dt2.whoAmI();

	std::cout << std::endl << "--- Destruction ---" << std::endl;
	return 0;
}
