/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 10:01:15 by esylva            #+#    #+#             */
/*   Updated: 2022/04/30 10:01:15 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template <typename T> 
T const & max(T const &x, T const &y) {
	return (x > y ? x : y);
}

template <typename T> 
T const & min(T const &x, T const &y) {
	return (x < y ? x : y);

}

template <typename T> 
void swap(T &x, T &y) {
	T tmp = x;
	x = y;
	y = tmp;
}

#endif