/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:45:11 by esylva            #+#    #+#             */
/*   Updated: 2022/04/25 14:53:18 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {
	std::cout << "Cure created" << std::endl;
}

Cure::Cure(const Cure& copy) : AMateria("cure") {
	std::cout << "Cure dubled" << std::endl;
	*this = copy;
}

Cure::~Cure(void) {
	std::cout << "Cure destroyed" << std::endl;
}

Cure& Cure::operator=(const Cure& obj) {
	(void)obj;
	return (*this);
}

Cure*	Cure::clone(void) const {
	std::cout << "CURE CLONES!" << std:: endl;
	return (new Cure(*this));
}