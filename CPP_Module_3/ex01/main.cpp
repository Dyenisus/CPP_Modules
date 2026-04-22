/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:48:05 by yesoytur          #+#    #+#             */
/*   Updated: 2026/04/22 15:48:06 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap st("Serena");

	st.attack("enemy");
	st.guardGate();
	st.takeDamage(30);
	st.beRepaired(10);
	st.takeDamage(200);
	st.attack("enemy2");
	st.beRepaired(5);

	ScavTrap st2(st);
	ScavTrap st3("Copy");
	st3 = st2;

	return 0;
}
