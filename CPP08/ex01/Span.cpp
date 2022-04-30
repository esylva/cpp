/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 18:33:02 by esylva            #+#    #+#             */
/*   Updated: 2022/04/30 18:56:43 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : size(0) {}

Span::Span(unsigned int n) : size(n) {}

Span::Span(const Span &copy) : vec(copy.vec), size(copy.size) {}

Span::~Span() {}

Span &Span::operator=(const Span &obj) {
	this->vec.clear();
	this->vec = obj.vec;
	this->size = obj.size;
	return *this;
}

void Span::addNumber(int n) {
	if (this->size == this->vec.size())
		throw IndexedSize();
	vec.push_back(n);
}

size_t Span::shortestSpan() {
	if (this->size < 2)
		throw RangeException();
	std::sort(this->vec.begin(), this->vec.end());
	size_t minVal = std::abs(*vec.begin() - *(vec.begin() + 1));
	std::vector<int>::iterator it;
	for (it = (vec.begin() + 1); it < vec.end(); ++it) {
		if (std::abs(*it - *(it - 1)) < (int)minVal)
			minVal = std::abs(*it - *(it - 1));
	}
	return minVal;
}

size_t Span::longestSpan() {
	if (this->size < 2)
		throw RangeException();
	std::sort(this->vec.begin(), this->vec.end());
	return std::abs(*vec.begin() - *(vec.end() - 1));
}
