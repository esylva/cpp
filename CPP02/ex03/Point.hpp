/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 00:02:52 by esylva            #+#    #+#             */
/*   Updated: 2022/04/24 00:02:52 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
#include "Fixed.hpp"

class Point {
    public:
    	Point(void);
		Point(const int param);
		Point(const float x, const float y);
		Point(const Point &src);
		~Point();

		Point & operator=(const Point &val);

		const Fixed	getX(void) const;
		const Fixed	getY(void) const;

    private:
		const Fixed			_x;
		const Fixed			_y;

};

bool bsp(Point const a, Point const b, Point const c, Point const point);
std::ostream&	operator<<(std::ostream& o, const Point& point);

#endif
