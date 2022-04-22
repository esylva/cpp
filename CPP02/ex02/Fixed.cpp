#include "Fixed.hpp"

Fixed::Fixed(void): _fixedPointNumber(0) {}

Fixed::Fixed(const int param) {
	if (param > 8388607) {
		std::cout << "Parameter is too big" << std::endl;
		_fixedPointNumber = 0;
	}
	else {
		_fixedPointNumber = param << this->_numberOfBits;
	}
}

Fixed::Fixed(const float param) {
	if ( (int)roundf(param) > 8388607) {
		std::cout << "Parameter is too big" << std::endl;
		_fixedPointNumber = 0;
	}
	else {
		_fixedPointNumber = roundf(param * (1 << _numberOfBits));
	}
}

Fixed::Fixed (const Fixed &src) {
	*this = src;
}

Fixed::~Fixed(void){}

Fixed &	Fixed::operator=(const Fixed &val) {
	if (this != &val)
		this->setRawBits(val.getRawBits());
	return *this;
}

int		Fixed::getRawBits( void ) const {
	return _fixedPointNumber;
}

void	Fixed::setRawBits( int const raw ) {
	this->_fixedPointNumber = raw;
}

float Fixed::toFloat( void ) const {
	return (float) _fixedPointNumber / (1 << _numberOfBits);

}

int Fixed::toInt( void ) const {
	return this->getRawBits() >> _numberOfBits;
}

std::ostream & operator<<(std::ostream &stream, const Fixed &val) {
	return stream << val.toFloat();
}
