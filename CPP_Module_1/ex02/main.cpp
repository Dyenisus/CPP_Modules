/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 00:50:48 by yesoytur          #+#    #+#             */
/*   Updated: 2026/04/23 00:50:49 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << &str       << std::endl;
    std::cout << stringPTR  << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << str        << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF  << std::endl;
    return 0;
}
