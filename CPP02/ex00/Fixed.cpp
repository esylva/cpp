/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 23:58:50 by esylva            #+#    #+#             */
/*   Updated: 2022/04/23 23:58:50 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _fixedPointNumber(0) {
	std::cout << "Default constructor called" << std::endl;
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
		setRawBits(val.getRawBits());
	return *this;
	}

int		Fixed::getRawBits( void ) const{
	std::cout << "getRawBits function called" << std::endl;

	return _fixedPointNumber;
	}

void	Fixed::setRawBits( int const raw ) {
	this->_fixedPointNumber = raw;
	}
