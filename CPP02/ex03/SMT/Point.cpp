/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:52:00 by jobject           #+#    #+#             */
/*   Updated: 2021/12/15 17:22:14 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point :: Point(void) : x(0), y(0) {}
Point :: Point(const float _x, const float _y) : x(Fixed(_x)), y(Fixed(_y)) {}
Point :: ~Point(void) {}

Point :: Point(const Point	&other) {
	*this = other;
}

Point	&Point :: operator=(const Point	&other) {
	if (this != &other) {
		this->x = other.getX();
		this->y = other.getY();
	}
	return *this;
}

Fixed	Point :: getX(void) const {
	return x;
}

Fixed	Point :: getY(void) const {
	return y;
}
