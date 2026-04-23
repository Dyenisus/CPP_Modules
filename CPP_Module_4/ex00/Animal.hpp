/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:17:23 by yesoytur          #+#    #+#             */
/*   Updated: 2026/04/23 01:37:46 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
protected:
	std::string _type;
public:
	Animal();
	Animal(const Animal& other);
	Animal& operator=(const Animal& other);
	virtual ~Animal();

	std::string const& getType() const;
	virtual void makeSound() const;
};

#endif
