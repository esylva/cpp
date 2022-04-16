/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:07:25 by esylva            #+#    #+#             */
/*   Updated: 2022/04/15 21:47:53 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string &name): _name(name){}

HumanB::~HumanB(void)
{
	std::cout << getName() << " goes home" << std::endl;
}

std::string		&HumanB::getName(void) const
{
	return(_name);
}

void	HumanB::setName(std::string name)
{
	_name = name;
}

Weapon	*HumanB::getWeapon(void) const
{
	return (_type);
}

void	HumanB::setWeapon(Weapon &weapon )
{
	_type = weapon;
}

void	HumanB::attack( void ) const
{
    if (_type->getType())
		std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
	else
		std::cout << _name << "hasn't weapon." << std::endl;
}