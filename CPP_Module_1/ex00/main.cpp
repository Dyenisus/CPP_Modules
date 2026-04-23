/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 12:37:18 by yesoytur          #+#    #+#             */
/*   Updated: 2026/04/23 00:46:27 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(const std::string& name);
void randomChump(const std::string& name);

int main(void) {
    Zombie* heap = newZombie("HeapZombie");
    heap->announce();
    delete heap;

    randomChump("StackZombie");
    return 0;
}
