/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:16:08 by yesoytur          #+#    #+#             */
/*   Updated: 2026/04/22 15:16:09 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed cross(Point const& A, Point const& B, Point const& P) {
	return (B.getX() - A.getX()) * (P.getY() - A.getY())
		 - (B.getY() - A.getY()) * (P.getX() - A.getX());
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed d1 = cross(a, b, point);
	Fixed d2 = cross(b, c, point);
	Fixed d3 = cross(c, a, point);
	Fixed zero;

	if (d1 == zero || d2 == zero || d3 == zero)
		return false;

	bool allPos = (d1 > zero) && (d2 > zero) && (d3 > zero);
	bool allNeg = (d1 < zero) && (d2 < zero) && (d3 < zero);
	return allPos || allNeg;
}
