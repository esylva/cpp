/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:51:11 by esylva            #+#    #+#             */
/*   Updated: 2022/04/15 21:34:39 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void){}

Weapon::Weapon(std::string name): _name(name) {}

Weapon::Weapon(std::string name, weapon): _name(name), _type(weapon){}

Weapon::~Weapon(void)
{
	std::cout << this->geWeapon() << " brocken" << std::endl;
}

std::string		Weapon::getWeapon(void) const
{
	return(this->_type);
}

void	Weapon::setWeapon(std::string weapon)
{
	_type = weapon;
}
