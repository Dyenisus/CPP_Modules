/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 12:44:13 by yesoytur          #+#    #+#             */
/*   Updated: 2026/04/22 12:44:37 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie {
public:
    Zombie();
    Zombie(const std::string& name);
    ~Zombie();
    void setName(const std::string& name);
    void announce(void);

private:
    std::string _name;
};

#endif