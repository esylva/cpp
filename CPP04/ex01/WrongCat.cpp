/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:45:46 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/31 16:06:02 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	set_type("WrongCat");
	std::cout << "WrongCat came from Chaos" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy) {
	std::cout << "WrongCat copied itself" << std::endl;
	*this = copy;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat returned to Chaos" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& obj)
{
	if (this != &obj)
		this->_type = obj.get_type();
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const WrongCat& wrong_cat)
{
	o << "WrongCat type is: " << wrong_cat.get_type() << std::endl;
	return (o);
}

void	WrongCat::makeSound(void) const {
	std::cout << get_type() << " says: \"Meeeyaaow!\"" << std::endl;
}





