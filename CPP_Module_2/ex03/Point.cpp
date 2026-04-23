/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:20:05 by yesoytur          #+#    #+#             */
/*   Updated: 2026/04/22 15:20:06 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {
	std::cout << "Default constructor called" << std::endl;
}

Point::Point(const float x, const float y) : _x(x), _y(y) {
	std::cout << "Float constructor called" << std::endl;
}

Point::Point(const Point& other) : _x(other._x), _y(other._y) {
	std::cout << "Copy constructor called" << std::endl;
}

Point& Point::operator=(const Point& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		_x = other._x;
		_y = other._y;
	}
	return *this;
}

Point::~Point(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed const& Point::getX(void) const {
	return _x;
}

Fixed const& Point::getY(void) const {
	return _y;
}
