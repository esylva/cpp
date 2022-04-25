/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 15:00:01 by esylva            #+#    #+#             */
/*   Updated: 2022/04/25 16:27:47 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {
	std::cout<< "NPC came" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	this->_name = "NPC";
}

Character::Character(std::string name) {
	std::cout << name << " came to serve" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	this->_name = name;
}
Character::Character(const Character &copy) {
	std::cout << copy.getName() << " forked " << copy.getName() << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	*this = copy;
}

Character::~Character(void) {
	std::cout << getName() << " went on a trip" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}

const std::string&	Character::getName(void) const {
	return (this->_name);
}

Character& Character::operator=(const Character& obj) {
	if (this != &obj) {
		this->_name = obj.getName() + "_copy";
		for (int i = 0; i < 4; i++) {
			if (this->_inventory[i])
				delete this->_inventory[i];
			if (obj._inventory[i])
				this->_inventory[i] = obj._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const Character& c){
	o << "Character name is: " << c.getName();
	return o;
}

void	Character::equip(AMateria* m) {
	std::cout << *m << " equipped" << std::endl;
	for (int i = 0; i < 4; i++) 	{
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx) {
	std::cout << *_inventory[idx] << " unequipped" << std::endl;
	if (idx >= 0 && idx < 4)
		this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4 && this->_inventory[idx] != NULL){
		std::cout << this->getName() << " ";
		this->_inventory[idx]->use(target);
	}
}