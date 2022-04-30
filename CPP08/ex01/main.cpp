/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 14:38:11 by esylva            #+#    #+#             */
/*   Updated: 2022/04/30 18:49:01 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

int main() {

	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "----------------TEST 2----------------" << std::endl;
	try {
		Span sp2(100000);
		std::vector<int> v(100000, 0);
		for (unsigned int i = 0; i < v.size(); ++i) {
			v[i] = i + 1;
		}
		sp2.addNumber(v.begin(), v.end());

		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
		sp2.addNumber(123);

	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	return 0;
}
