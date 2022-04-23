/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:52:03 by jobject           #+#    #+#             */
/*   Updated: 2021/12/15 17:20:23 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {
	public:
		Point(void);
		Point(const Point	&other);
		Point(const	float	_x, const float	_y);
		~Point(void);
		Point	&operator=(const Point	&other);
		Fixed	getX(void) const;
		Fixed	getY(void) const;
	private:
		Fixed x;
		Fixed y;	
};

bool	bsp(Point A, Point B, Point C, Point const point);

#endif