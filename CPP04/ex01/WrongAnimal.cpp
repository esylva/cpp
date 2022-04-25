/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:41:43 by esylva            #+#    #+#             */
/*   Updated: 2022/04/25 11:41:43 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal") {
	std::cout	<< "WARNING! Wrong animal created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) {
	std::cout << "Wrong animal copied itself" << std::endl;
	*this = copy;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal destructed" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
	if (this != &obj)
		this->_type = obj.get_type();
	return (*this);
}

std::ostream& operator<<(std::ostream& o, WrongAnimal const& WrongAnimal)
{
	o << "WrongAnimal type is: " << WrongAnimal.get_type() << std::endl;
	return (o);
}

void	WrongAnimal::set_type(std::string type) {
	this->_type = type;
}

std::string	WrongAnimal::get_type(void) const {
	return (this->_type);
}

void	WrongAnimal::makeSound(void) const {
	std::cout << get_type() << " makes a Wrong animal sound" << std::endl;
}
