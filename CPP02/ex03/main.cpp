/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 00:02:32 by esylva            #+#    #+#             */
/*   Updated: 2022/04/24 00:02:32 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {

	std::string status;

	Point a(3, 3);
	Point b(7, 4);
	Point c(8, 8);
	Point point[6] = {
						Point(6, 5), // inside
						Point(7, 6), // inside
						Point(5, 5), // on border
						Point(3, 5), // outside
						Point(-1, -1), // outside
						Point(1.5f, 2.5f), // outside
					};
	std::cout 
		<< "Triangle coordinates:" << std::endl
		<< "a: " << a << " b: " << b << " c: " << c << std::endl;
	for (int i = 0;  i < 6; i++)
	{
		if (bsp(a, b, c, point[i]) == true)
			status = "  is inside";
		else
			status = " is outside";
		std::cout 
			<< "Point " << point[i] << status << std::endl;
	}
	return 0;

	}
