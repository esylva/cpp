/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 00:02:04 by esylva            #+#    #+#             */
/*   Updated: 2022/04/24 00:02:04 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// bool bsp( Point const a, Point const b, Point const c, Point const point);


static Fixed	sign(Point p1, Point p2, Point	p3) {
	Fixed	res((p1.getX().toInt() - p3.getX().toInt()) * (p2.getY().toInt() - p3.getY().toInt()) - (p1.getY().toInt() - p3.getY().toInt()) * (p2.getX().toInt() - p3.getX().toInt()));
	return res;
}

bool	bsp(Point A, Point B, Point C, Point const point) {
	Fixed	d1, d2, d3;
	bool	negative, positive;

	d1 = sign(point, A, B);
	d2 = sign(point, B, C);
	d3 = sign(point, C, A);

    std::cout << d1 << " " << d2 << " " << d3 << std::endl;
	negative = (d1 < 0 && d2 < 0 && d3 < 0);
	positive = (d1 > 0 && d2 > 0 && d3 > 0);
	if (negative || positive)
	    return true;
	return false;
}
