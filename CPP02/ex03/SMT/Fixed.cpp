/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:51:49 by jobject           #+#    #+#             */
/*   Updated: 2021/12/15 15:53:15 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed :: Fixed(void) : intToConvert(0) {}
Fixed :: ~Fixed(void) {}

Fixed :: Fixed(const Fixed	&others) {
	*this = others;
}

Fixed :: Fixed(const int	integer) {
	Fixed :: intToConvert = integer << raw;
}

Fixed :: Fixed(const float	floating) {
	Fixed :: intToConvert = roundf(floating * 256);
}

Fixed	&Fixed :: operator=(const Fixed	&other) {
	if (this != &other)
		this->intToConvert = other.getRawBits();
	return *this;
}

int	Fixed :: getRawBits(void) const {
	return intToConvert;
}

void	Fixed :: setRawBits(int const	_intToConvert) {
	Fixed :: intToConvert = _intToConvert;
}

int	Fixed :: toInt(void) const {
	return intToConvert >> raw;
}

float	Fixed :: toFloat(void) const {
	return (float) intToConvert / 256;
}

bool Fixed :: operator>(const Fixed	&other) const {
	return intToConvert > other.getRawBits();
}

bool Fixed :: operator<(const Fixed	&other) const {
	return intToConvert < other.getRawBits();
}

bool Fixed :: operator>=(const Fixed	&other) const {
	return intToConvert >= other.getRawBits();
}

bool Fixed :: operator<=(const Fixed	&other) const {
	return intToConvert <= other.getRawBits();
}

bool Fixed :: operator==(const Fixed	&other) const {
	return intToConvert == other.getRawBits();
}

bool Fixed :: operator!=(const Fixed	&other) const {
	return intToConvert != other.getRawBits();
}

Fixed	Fixed :: operator+(const Fixed &other) {
	Fixed	res;

	res.setRawBits(intToConvert + other.getRawBits());
	return res;
}

Fixed	Fixed :: operator-(const Fixed &other) {
	Fixed	res;

	res.setRawBits(intToConvert - other.getRawBits());
	return res;
}

Fixed	Fixed :: operator*(const Fixed &other) {
	Fixed	res(this->toFloat() * other.toFloat());
	return res;
}

Fixed	Fixed :: operator/(const Fixed &other) {
	Fixed	res(this->toFloat() / other.toFloat());
	return res;
}

Fixed	&Fixed :: operator++(void) {
	intToConvert++;
	return *this;
}

Fixed	&Fixed :: operator--(void) {
	intToConvert--;
	return *this;
}

Fixed	Fixed :: operator--(int) {
	Fixed	res(*this);
	*this = operator--();
	return res;
}

Fixed	Fixed :: operator++(int) {
	Fixed	res(*this);
	*this = operator++();
	return res;
}

std :: ostream	&operator<<(std :: ostream &stream, const Fixed	&other) {
	return stream << other.toFloat();
}

Fixed	&Fixed :: min(Fixed	&f1, Fixed	&f2) {
	return f1 < f2 ? f1 : f2;
}

const Fixed	&Fixed :: min(const Fixed	&f1, const Fixed	&f2) {
	return f1 < f2 ? f1 : f2;
}

Fixed	&Fixed :: max(Fixed	&f1, Fixed	&f2) {
	return f1 > f2 ? f1 : f2;
}

const Fixed	&Fixed :: max(const Fixed	&f1, const Fixed	&f2) {
	return f1 > f2 ? f1 : f2;
}
