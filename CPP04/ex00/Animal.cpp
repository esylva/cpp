/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 22:32:15 by esylva            #+#    #+#             */
/*   Updated: 2022/04/24 22:32:15 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("Animal") {
	std::cout << "Animal created" << std::endl;
}

Animal::Animal(const std::string &type): _type(type) {
	std::cout << "Animal " << type << " created" << std::endl;
}

Animal::Animal(const Animal& copy) {
	*this = copy;
}

Animal::~Animal() {
	std::cout << "The animal came back" << std::endl;
}

Animal& Animal::operator=(const Animal& obj) {
	if (this != &obj)
		this->_type = obj.getType();
	return (*this);
}

// internal functions

std::string	Animal::getType() const {
	return (this->_type);
}

void		Animal::setType(std::string newType) {
	this->_type = newType;
}

void	Animal::makeSound(void) const {
	std::cout << getType() << " makes an animal sound"	<< std::endl;
}

// external functions

std::ostream& operator<<(std::ostream& o, Animal const& animal) {
	o << "Animal type is: "	<< animal.getType() << std::endl;
	return (o);
}