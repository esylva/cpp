/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 18:51:28 by esylva            #+#    #+#             */
/*   Updated: 2022/04/30 18:53:38 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <deque>

template<typename T, typename Sequence = std::deque<T> >
class MutantStack : public std::stack<T, Sequence> {
public:
	MutantStack() : std::stack<T, Sequence>() {}

	MutantStack(const MutantStack <T, Sequence> &other) : std::stack<T, Sequence>(other) {}

	~MutantStack() {}

	MutantStack<T, Sequence> &operator=(const MutantStack<T, Sequence> &other) {
		this->c = other.c;
	}

	typedef typename std::stack<T, Sequence>::container_type::iterator iterator;
	typedef typename std::stack<T, Sequence>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T, Sequence>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T, Sequence>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator begin() {
		return this->c.begin(); 
	}

	const_iterator cbegin() const { 
		return this->c.cbegin(); 
	}

	reverse_iterator rbegin() {
		return this->c.rbegin(); 
	}

	const_reverse_iterator crbegin() const {
		return this->c.crbegin(); 
	}

	iterator end() {
		return this->c.end();
	}

	const_iterator cend() const {
		return this->c.cend();
	}

	reverse_iterator rend() {
		return this->c.rend();
	}

	const_reverse_iterator crend() const {
		return this->c.crend();
	}
};

#endif
