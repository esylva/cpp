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

Weapon::Weapon(){}

Weapon::Weapon(std::string &weapon): _type(weapon){}

Weapon::~Weapon(void)
{
	std::cout << this->geWeapon() << " brocken" << std::endl;
}

std::string		&Weapon::getWeapon(void) const
{
	return(_type);
}

void	Weapon::setWeapon(std::string &weapon)
{
	_type = weapon;
}
