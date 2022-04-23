/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 00:01:51 by esylva            #+#    #+#             */
/*   Updated: 2022/04/24 00:01:51 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;


	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;

	std::cout << "b + a = " << (b + a) << std::endl;
	std::cout << "b - a = " << (b - a) << std::endl;
	std::cout << "a / b = " << (a / b) << std::endl;
	std::cout << "b * a = " << (b * a) << std::endl;
	
	std::cout << "b > a = " << (b > a) << std::endl;
	std::cout << "b < a = " << (b < a) << std::endl;
	std::cout << "b >= a = " << (b >= a) << std::endl;
	std::cout << "b <= a = " << (b <= a) << std::endl;
	std::cout << "b != a = " << (b != a) << std::endl;
	std::cout << "b == a = " << (b == a) << std::endl;

	std::cout << "MAX(a, b) = " << Fixed::max(a, b) << std::endl;
	std::cout << "MIN(a, b) = " << Fixed::min(a, b) << std::endl;


	}
