#ifndef POINT_HPP
# define POINT_HPP
#include "Fixed.hpp"

class Point {
    public:
    	Point(void);
		Point(const int param);
		Point(const Point &src);
		~Point();

		Point & operator=(const Point &val);


    private:
		const Fixed			_x;
		const Fixed			_y;

};
#endif
