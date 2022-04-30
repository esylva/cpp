/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 18:32:51 by esylva            #+#    #+#             */
/*   Updated: 2022/04/30 18:50:41 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class IndexedSize : public std::exception {
public:
	const char *what() const throw() {
		return "Can't add numbers anymore";
	}
};

class RangeException : public std::exception {
public:
	const char *what() const throw() {
		return "Range not found exception";
	}
};

class Span {
public:
	Span();
	Span(unsigned int n);
	Span(const Span &copy);
	~Span();

	Span &operator=(const Span &obj);

	void addNumber(int n);
	size_t shortestSpan();
	size_t longestSpan();

	template<typename Iterator>
	void addNumber(Iterator begin, Iterator end) {
		if (std::distance(begin, end) != this->size || std::distance(begin, end) < 0)
			throw IndexedSize();
		this->vec.reserve(size);
		std::copy(begin, end, std::back_inserter(this->vec));
	}
	
private:
	std::vector<int> vec;
	unsigned int size;
};

#endif
