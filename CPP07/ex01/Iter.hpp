/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 10:01:02 by esylva            #+#    #+#             */
/*   Updated: 2022/04/30 10:01:02 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>


template<typename T>
void foo(T const &a) {
	std::cout << a << std::endl;
}


template<typename T>
void iter(T *array, int arrayLenth, void (*foo)(T const &)) {
	for (int i = 0; i < arrayLenth; i++) {
		foo(array[i]);
	}
}

#endif