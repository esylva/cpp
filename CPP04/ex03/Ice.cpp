/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:48:06 by esylva            #+#    #+#             */
/*   Updated: 2022/04/25 14:53:24 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {
	std::cout << "Ice created" << std::endl;
}

Ice::Ice(const Ice& obj) : AMateria("ice") {
	std::cout << "Ice dubled" << std::endl;
	*this = obj;
}

Ice::~Ice(void) {
	std::cout << "Ice destroyed" << std::endl;
}

Ice& Ice::operator=(const Ice& obj) {
	(void)obj;
	return (*this);
}

Ice*	Ice::clone(void) const {
	std::cout << "ICE CLONES!" << std:: endl;
	return (new Ice(*this));
}