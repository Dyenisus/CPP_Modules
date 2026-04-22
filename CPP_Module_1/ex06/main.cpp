/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 13:36:21 by yesoytur          #+#    #+#             */
/*   Updated: 2026/04/22 13:36:22 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <level>" << std::endl;
        return 1;
    }

    Harl harl;
    std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    std::string arg = argv[1];
    int levelIndex = -1;

    for (int i = 0; i < 4; i++) {
        if (levels[i] == arg) {
            levelIndex = i;
            break;
        }
    }

    switch (levelIndex) {
        case 0: harl.debug();
                __attribute__((fallthrough));
        case 1: harl.info();
                __attribute__((fallthrough));
        case 2: harl.warning();
                __attribute__((fallthrough));
        case 3: harl.error();
                break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    return 0;
}
