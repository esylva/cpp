/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 22:35:12 by esylva            #+#    #+#             */
/*   Updated: 2022/04/24 22:35:12 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	setType("Cat");
	this->_brain = new Brain();
	std::cout	<< "Cat transformed from the animal" << std::endl;
}

Cat::Cat(const Cat& copy): Animal(copy) {
	std::cout << "More cats!" << std::endl;
	if (copy._brain)
		this->_brain = new Brain(*copy._brain);
	else
		this->_brain = new Brain();
	this->_type = copy._type;
}

Cat::~Cat(void) {
	delete this->_brain;
	std::cout << "Cat transformed to the animal" << std::endl;
}

Cat&	Cat::operator=(const Cat& obj) {
	if (this != &obj) {
		this->_type = obj.getType();
		this->_brain = new Brain(*obj._brain);
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const Cat& cat) {
	o 	<< "Cat type is: " << cat.getType() << std::endl;
	return (o);
}

void	Cat::makeSound(void) const {
	std::cout<< "🐈 " << getType()	<< " says: \" Meow! I'm here!\"" << std::endl;
}
