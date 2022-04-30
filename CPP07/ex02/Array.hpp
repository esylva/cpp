/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 10:01:49 by esylva            #+#    #+#             */
/*   Updated: 2022/04/30 10:01:49 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template<typename Type>
class Array
{
	private:
		Type *t;
		unsigned int count;
		class NoAllocateException : public std::exception
		{
			public:
				virtual const char* what() const throw() {return ("Segfault");}
		};
	public:
		Array() { t = 0; count = 0;}
		Array(unsigned int count)
		{
			unsigned int i;

			i = 0;
			t = new Type[count];
			this->count = count;
			while(i < count)
			{
				this->t[i] = 5;
				i++;
			}
		}
		Array(Array const &array)
		{
			unsigned int i;

			i = 0;
			t = new Type[array.count];
			count = array.count;
			while (i < count)
			{
				t[i] = array.t[i];
				i++;
			}
		}
		Type &operator[](unsigned int elem)
		{
			if (elem >= 0 && elem < count)
			{
				return (t[elem]);
			}
			throw NoAllocateException();
			return (t[0]);
		}
		~Array() 
		{
			delete[]t;
		}
		int size()
		{
			return (count);
		}
};


#endif