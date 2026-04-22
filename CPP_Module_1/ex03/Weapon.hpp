/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 12:50:10 by yesoytur          #+#    #+#             */
/*   Updated: 2026/04/22 12:50:38 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon {
public:
    Weapon(const std::string& type);
    const std::string& getType() const;
    void setType(const std::string& type);

private:
    std::string _type;
};

#endif