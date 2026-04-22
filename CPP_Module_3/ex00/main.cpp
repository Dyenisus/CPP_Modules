/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:37:28 by yesoytur          #+#    #+#             */
/*   Updated: 2026/04/22 15:37:29 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap ct("Alpha");

	ct.attack("target1");
	ct.takeDamage(5);
	ct.beRepaired(3);

	ct.takeDamage(20);
	ct.attack("target2");
	ct.beRepaired(5);

	ClapTrap ct2("Beta");
	for (int i = 0; i < 10; i++)
		ct2.attack("dummy");
	ct2.attack("dummy");
	ct2.beRepaired(1);

	ClapTrap ct3(ct);
	ClapTrap ct4("Gamma");
	ct4 = ct3;

	return 0;
}
