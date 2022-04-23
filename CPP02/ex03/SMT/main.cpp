/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:51:56 by jobject           #+#    #+#             */
/*   Updated: 2021/12/15 17:19:09 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void) {
	Point	A(0, 0), B(0, 10), C(15, 25);
	const	Point	point1(0, 1), point2(-1, -1);

	bsp(A, B, C, point1) ? std :: cout << "inside\n" : std :: cout << "outside\n";
	bsp(A, B, C, point2) ? std :: cout << "inside\n" : std :: cout << "outside\n";
	return 0;
}