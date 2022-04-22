#include "Fixed.hpp"

Fixed::Fixed(void): _fixedPointNumber(0) {
	std::cout << "Default constructor called" << std::endl;
	}

Fixed::Fixed(const int param) {
	std::cout << "Int constructor called" << std::endl;
	_fixedPointNumber = param;
	}

Fixed::Fixed(const float param) {
	std::cout << "Float constructor called" << std::endl;
	_fixedPointNumber = (int)param;
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
	return _fixedPointNumber;
	}

void	Fixed::setRawBits( int const raw ) {
	this->_fixedPointNumber = raw;
	}
std::ostream & operator<<(std::ostream &o, const Fixed &val) {
	o << val.getRawBits();
	return o;
	}

// float Fixed::toFloat( void ) const {
// 	return(0);
// 	}

int Fixed::toInt( void ) const{
	float a = getRawBits();


	return(roundf(a));
	}