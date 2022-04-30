/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 14:22:58 by esylva            #+#    #+#             */
/*   Updated: 2022/04/30 17:23:45 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class MyException : public std::exception {
public:
	const char *what() const throw() {
		return ("Element not found");
	}
};

template<typename T>
typename T::iterator easyfind(T &first, int second) {
	typename T::iterator iter;
	iter = std::find(first.begin(), first.end(), second);
	if (iter == first.end())
		throw MyException();
	return iter;
}

template <typename T>
typename T::const_iterator easyfind(const T& first, const int second) {
   typename T::iterator i;
   i = find(first.begin, first.end, second);
    if (i == first.end)
        throw MyException();
return i;
}

#endif
