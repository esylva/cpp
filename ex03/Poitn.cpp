#include "Point.hpp"

Point::Point(void): _x(0), _y(0){}

Point::Point(const Point &src) {
    *this = src;
}

Point::~Point(){}

Point & Point::operator=(const Point &val){

}
