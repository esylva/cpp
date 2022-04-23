/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:51:51 by jobject           #+#    #+#             */
/*   Updated: 2021/12/15 17:12:14 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed	sign(Point p1, Point p2, Point	p3) {
	Fixed	res((p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) - (p1.getY() - p3.getY()) * (p2.getX() - p3.getX()));
	return res;
}

bool	bsp(Point A, Point B, Point C, Point const point) {
	Fixed	d1, d2, d3;
	bool	negative, positive;

	d1 = sign(point, A, B);
	d2 = sign(point, B, C);
	d3 = sign(point, C, A);
	negative = d1 < 0 || d2 < 0 || d3 < 0;
	positive = d1 > 0 || d2 > 0 || d3 > 0;
	return !(negative & positive);
}
