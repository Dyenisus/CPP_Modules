/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:20:13 by yesoytur          #+#    #+#             */
/*   Updated: 2026/04/23 01:33:37 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {
private:
	Fixed	_x;
	Fixed	_y;

public:
	Point(void);
	Point(const float x, const float y);
	Point(const Point& other);
	Point& operator=(const Point& other);
	~Point(void);

	Fixed const& getX(void) const;
	Fixed const& getY(void) const;
};

#endif