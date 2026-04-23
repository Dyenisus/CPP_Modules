/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 12:37:36 by yesoytur          #+#    #+#             */
/*   Updated: 2026/04/22 12:38:17 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP 

#include <string>

class Zombie {
public:
    Zombie(const std::string& name);
    ~Zombie();
    void announce(void);

private:
    std::string _name;
};

#endif