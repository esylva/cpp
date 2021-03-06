/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 23:59:39 by esylva            #+#    #+#             */
/*   Updated: 2022/04/23 23:59:39 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _fixedPointNumber(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int param) {
	std::cout << "Int constructor called" << std::endl;
	if (param > 8388607) {
		std::cout << "Parameter is too big" << std::endl;
		_fixedPointNumber = 0;
	}
	else {
		_fixedPointNumber = param << this->_numberOfBits;
	}
}

Fixed::Fixed(const float param) {
	std::cout << "Float constructor called" << std::endl;
	if ( (int)roundf(param) > 8388607) {
		std::cout << "Parameter is too big" << std::endl;
		_fixedPointNumber = 0;
	}
	else {
		_fixedPointNumber = roundf(param * (1 << _numberOfBits));
	}
}

Fixed::Fixed (const Fixed &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=(const Fixed &val) {
	std::cout << "Copy assignment operator called" << std::endl;
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
