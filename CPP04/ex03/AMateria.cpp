/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:13:31 by esylva            #+#    #+#             */
/*   Updated: 2022/04/25 16:10:34 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


AMateria::AMateria() {}

AMateria::AMateria(std::string const &type): _type(type) {
	std::cout << "Amateria created" << std::endl;
}


AMateria::AMateria(const AMateria &copy){
if (this != &copy)
	this->_type = copy._type;
}
AMateria::~AMateria() {
	std::cout << "Amateria destroed" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& obj){
	(void)obj;
	return (*this);
}

std::string const&	AMateria::getType() const {
	return this->_type;
}


void	AMateria::use(ICharacter& target){
	if (getType() == "ice") {
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	}
	if (getType() == "cure") {
		std::cout << "* heals " << target.getName() << "\'s wounds *" << std::endl;
	}
}

std::ostream&	operator<<(std::ostream& o, const AMateria& i) {
		o << i.getType();
	return o;
}
