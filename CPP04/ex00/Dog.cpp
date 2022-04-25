/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 22:34:07 by esylva            #+#    #+#             */
/*   Updated: 2022/04/24 22:34:07 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	setType("Dog");
	std::cout	<< "Dog transformed from the animal" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy) {
	std::cout << "More dogs!" << std::endl;
	*this = copy;
}

Dog::~Dog() {
	std::cout << "Dog transformed to the animal" << std::endl;
}

Dog& Dog::operator=(const Dog& obj) {
	if (this != &obj)
		this->_type = obj.getType();
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const Dog& dog)
{
	o << "Dog type is: " << dog.getType() << std::endl;
	return (o);
}

void	Dog::makeSound(void) const
{
	std::cout << "🐕 " << getType() << " says: \"Wof. I'm here.\"" << std::endl;
}
