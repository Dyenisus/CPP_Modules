/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 12:54:15 by yesoytur          #+#    #+#             */
/*   Updated: 2026/04/23 01:27:48 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB {
public:
    HumanB(const std::string& name);
    void setWeapon(Weapon& weapon);
    void attack() const;

private:
    std::string _name;
    Weapon*     _weapon;
};

#endif