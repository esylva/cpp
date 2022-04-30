/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 14:38:11 by esylva            #+#    #+#             */
/*   Updated: 2022/04/29 20:56:19 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

void ber(const int &i) {
	std::cout << i <<std::endl;
}

void bar(const std::string &s) {
	std::cout << s <<std::endl;
}

int main() {
	std::string str[4] = {"Ехали", "медведи", "на", "велосипеде"};
	int a[5] = {9, 7, 5, 3, 1};
	iter(a, 5, ber);
	std::cout << std::endl;
	iter(str, 4, bar);
	std::cout << std::endl;
	iter(a, 5, foo);
	std::cout << std::endl;
	iter(str, 4, foo);	
	return 0;
}