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
	std::cout	<< "Cat transformed from the animal" << std::endl;
}

Cat::Cat(const Cat& copy): Animal(copy) {
	std::cout << "More cats!" << std::endl;
	*this = copy;
}

Cat::~Cat(void) {
	std::cout		<< "Cat transformed to the animal" 		<< std::endl;
}

Cat&	Cat::operator=(const Cat& obj) {
	if (this != &obj)
		this->_type = obj.getType();
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const Cat& cat) {
	o 	<< "Cat type is: " << cat.getType() << std::endl;
	return (o);
}

void	Cat::makeSound(void) const {
	std::cout<< "🐈 " << getType()	<< " says: \" Meow! I'm here!\"" << std::endl;
}






