/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 12:44:48 by yesoytur          #+#    #+#             */
/*   Updated: 2026/04/23 00:48:59 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, const std::string& name);

int main(void) {
    int N = 5;
    Zombie* horde = zombieHorde(N, "HordeZombie");
    for (int i = 0; i < N; i++)
        horde[i].announce();
    delete[] horde;
    return 0;
}
