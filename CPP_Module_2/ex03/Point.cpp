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

Point::Point(void) : _x(0), _y(0) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::Point(const Point& other) : _x(other._x), _y(other._y) {}

Point& Point::operator=(const Point& other) {
	if (this != &other) {
		_x = other._x;
		_y = other._y;
	}
	return *this;
}

Point::~Point(void) {}

Fixed const& Point::getX(void) const {
	return _x;
}

Fixed const& Point::getY(void) const {
	return _y;
}
