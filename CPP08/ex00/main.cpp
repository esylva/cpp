/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 14:38:11 by esylva            #+#    #+#             */
/*   Updated: 2022/04/30 17:24:57 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


int main() {
	std::vector<int> vec;
	for (int i = 0; i < 6; ++i) {
		vec.push_back(i + 3);
		std::cout << vec[i] << std::endl;
	}
	try {
		std::cout << "find: " << *easyfind(vec, 5) << std::endl;
		std::cout << "find: " << *easyfind(vec, 3) << std::endl;
		std::cout << "find: " << *easyfind(vec, 2) << std::endl;
	} 
	
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
