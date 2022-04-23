/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 00:02:42 by esylva            #+#    #+#             */
/*   Updated: 2022/04/24 00:02:42 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void): _x(0), _y(0){}
Point::Point(const float x, const float y): _x(x), _y(y){}
Point::Point(const Point& copy) : _x(copy.getX()), _y(copy.getY()){}
Point::~Point(){}

Point & Point::operator=(const Point &val){
	(void)val;
	return (*this);
}

const Fixed	Point::getX(void) const
{
	return (this->_x);
}

const Fixed	Point::getY(void) const
{
	return (this->_y);
}

std::ostream&	operator<<(std::ostream& o, const Point& point)
{
	o
		<< '(' << point.getX()	<< "," << point.getY()	<< ')';
	return (o);
}
