/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 14:38:11 by esylva            #+#    #+#             */
/*   Updated: 2022/04/30 18:51:18 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Mutantstack.hpp"

int main() {
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);

	std::cout << "see top elem: " << mstack.top() << std::endl;
	std::cout << "see top elem: " << mstack.top() << std::endl;
	std::cout << "--------------------------" << std::endl;

	mstack.pop();

	std::cout << "size: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::const_iterator it = mstack.begin();
	MutantStack<int>::const_iterator ite = mstack.end();

	std::cout << "iterator begin(): " << *it << std::endl;
	++it;
	std::cout << "iterator begin(): " << *it << std::endl;
	--it;
	std::cout << "iterator begin(): " << *it << std::endl;
	while (it != ite) {
		std::cout << "iterators in while: " << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	size_t siz = s.size();
	for (size_t i = 0; i < siz; ++i) {
		std::cout << "stack -> " << s.top() << std::endl;
		s.pop();
	}
	return 0;
}
