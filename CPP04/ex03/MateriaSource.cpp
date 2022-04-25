/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 15:45:03 by esylva            #+#    #+#             */
/*   Updated: 2022/04/25 16:04:00 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "New MateriaSource founded" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& copy) {
	std::cout << "MateriaSource from another dimension called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
	*this = copy;
}

MateriaSource::~MateriaSource() { 
	std::cout << "MateriaSource destroyed" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->_materia[i])
			delete this->_materia[i];
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& obj) {
	if (this != &obj) {
		for (int i = 0; i < 4; i++) {
			if (this->_materia[i] != NULL)
				delete this->_materia[i];
			if (obj._materia[i] != NULL)
				this->_materia[i] = obj._materia[i]->clone();
			else
				this->_materia[i] = NULL;
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (this->_materia[i] == NULL) {
			this->_materia[i] = m;
			return ;
		}
	}
	delete m;
	return ;
}

AMateria*	MateriaSource::createMateria(const std::string& type) {
	for (int i = 0; i < 4; i++) {
		if (this->_materia[i] != NULL && this->_materia[i]->getType() == type)
			return (this->_materia[i]->clone());
	}
	return (NULL);
}