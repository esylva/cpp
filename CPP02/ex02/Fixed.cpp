#include "Fixed.hpp"

// constructors and destructor

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

// overloaded opetators

Fixed &	Fixed::operator=(const Fixed &val) {
	if (this != &val)
		this->setRawBits(val.getRawBits());
	return *this;
}

bool Fixed::operator>(const Fixed &val) const {
		return (this->_fixedPointNumber > val._fixedPointNumber);
} 

bool Fixed::operator<(const Fixed &val) const {
		return this->_fixedPointNumber < val._fixedPointNumber;
}

bool Fixed::operator<=(const Fixed &val) const {
		return this->_fixedPointNumber <= val._fixedPointNumber;
}

bool Fixed::operator>=(const Fixed &val) const{
		return this->_fixedPointNumber >= val._fixedPointNumber;
}

bool Fixed::operator==(const Fixed &val) const {
		return this->_fixedPointNumber == val._fixedPointNumber;
}

bool Fixed::operator!=(const Fixed &val) const {
		return this->_fixedPointNumber != val._fixedPointNumber;
}
	
Fixed Fixed::operator+(const Fixed &val) const {
		Fixed result(this->_fixedPointNumber + val._fixedPointNumber);
		// Fixed result(this->toFloat() + val.toFloat());
		// result.setRawBits(this->_fixedPointNumber + val._fixedPointNumber);
		return result;
}

Fixed Fixed::operator-(const Fixed &val) const {
		Fixed result(this->_fixedPointNumber - val._fixedPointNumber);
		// Fixed result(this->toFloat() - val.toFloat());
		result.setRawBits(this->_fixedPointNumber - val._fixedPointNumber);
		return result;
}

Fixed Fixed::operator*(const Fixed &val) const {
		Fixed result;
		result.setRawBits(this->toFloat() * val.toFloat());
		return result;
}

Fixed Fixed::operator/(const Fixed &val) const {
		Fixed result;
		result.setRawBits(this->toFloat() / val.toFloat());
		return result;
}

	// Fixed & operator+(const Fixed &val1, const Fixed &val2) const;
	// Fixed & operator-(const Fixed &val1, const Fixed &val2) const;
	// Fixed & operator*(const Fixed &val1, const Fixed &val2) const;
	// Fixed & operator/(const Fixed &val1, const Fixed &val2) const;

// 	Fixed & Fixed::operator+=(const Fixed &val) const;
// 	Fixed & Fixed::operator-=(const Fixed &val) const;
// 	Fixed & Fixed::operator*=(const Fixed &val) const;
// 	Fixed & Fixed::operator/=(const Fixed &val) const;

// //prefix operators
// 	Fixed & Fixed::operator++();
// 	Fixed & Fixed::operator--();

// // postfix operators
// 	Fixed Fixed::operator++(int one);
// 	Fixed Fixed::operator--(int one);


// internal functions

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

// const static Fixed& Fixed::min(Fixed& first, Fixed& second);
// const static Fixed& Fixed::min(const Fixed& first, const Fixed& second);
// const static Fixed& Fixed::max(Fixed& first, Fixed& second);
// const static Fixed& Fixed::max(const Fixed& first, const Fixed& second);



// external functions

std::ostream & operator<<(std::ostream &stream, const Fixed &val) {
	return stream << val.toFloat();
}


