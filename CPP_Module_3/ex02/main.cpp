/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:55:54 by yesoytur          #+#    #+#             */
/*   Updated: 2026/04/22 15:55:55 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::cout << "--- ScavTrap ---" << std::endl;
	ScavTrap st("Serena");
	st.attack("foe");
	st.guardGate();
	st.takeDamage(10);
	st.beRepaired(5);

	std::cout << std::endl << "--- FragTrap ---" << std::endl;
	FragTrap ft("Frank");
	ft.attack("foe");
	ft.highFivesGuys();
	ft.takeDamage(50);
	ft.beRepaired(20);

	std::cout << std::endl << "--- Copy/Assign ---" << std::endl;
	FragTrap ft2(ft);
	FragTrap ft3("Copy");
	ft3 = ft2;

	std::cout << std::endl << "--- Destruction ---" << std::endl;
	return 0;
}
