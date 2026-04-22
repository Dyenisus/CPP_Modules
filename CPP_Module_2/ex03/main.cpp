/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:20:00 by yesoytur          #+#    #+#             */
/*   Updated: 2026/04/22 15:20:01 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void) {
	Point a(0.0f, 0.0f);
	Point b(10.0f, 0.0f);
	Point c(0.0f, 10.0f);

	Point inside(2.0f, 2.0f);
	Point onEdge(5.0f, 0.0f);
	Point onVertex(0.0f, 0.0f);
	Point outside(10.0f, 10.0f);

	std::cout << "Inside (2,2): " << (bsp(a, b, c, inside) ? "true" : "false") << std::endl;
	std::cout << "On edge (5,0): " << (bsp(a, b, c, onEdge) ? "true" : "false") << std::endl;
	std::cout << "On vertex (0,0): " << (bsp(a, b, c, onVertex) ? "true" : "false") << std::endl;
	std::cout << "Outside (10,10): " << (bsp(a, b, c, outside) ? "true" : "false") << std::endl;

	return 0;
}
