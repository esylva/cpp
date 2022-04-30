/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 10:01:49 by esylva            #+#    #+#             */
/*   Updated: 2022/04/30 13:19:36 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template<typename T>
class Array
{
	private:
		T*				_t;
		unsigned int	_countOfElements;

		// class NoAllocateException : public std::exception
		// {
		// 	public:
		// 		virtual const char* what() const throw() {return ("Segfault");}
		// };
	public:
		Array(): _t(NULL), _countOfElements(0){}

		Array(unsigned int countOfElements): _countOfElements(countOfElements) {
						
			_t = new T[_countOfElements];
			for (unsigned int i = 0; i < _countOfElements; i++) {
				this->_t[i] = 0;
			}
		}

		Array(Array const &copy) {
			
			_t = new T[copy.size()];
			this->_countOfElements = copy.size();
			for(unsigned int i = 0; i < _countOfElements; i++) {
				this->_t[i] = copy._t[i];
			}
		}

		~Array() {
			delete[] _t;
		}

		T &operator[](unsigned int elem) {
			if (elem >= 0 && elem < _countOfElements) {
				return (_t[elem]);
			}
			// throw NoAllocateException();
			throw std::exception();
			return _t[0];
		}
		
		int size() const {
			return (_countOfElements);
		}
};

#endif
