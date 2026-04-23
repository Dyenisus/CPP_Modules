/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:34:45 by yesoytur          #+#    #+#             */
/*   Updated: 2026/04/22 16:34:46 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const& type) : _type(type) {}

AMateria::AMateria(const AMateria& other) : _type(other._type) {}

AMateria& AMateria::operator=(const AMateria& other) {
	if (this != &other)
		_type = other._type;
	return *this;
}

AMateria::~AMateria() {}

std::string const& AMateria::getType() const {
	return _type;
}

void AMateria::use(ICharacter& target) {
	(void)target;
}
