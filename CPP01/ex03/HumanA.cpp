/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:07:25 by esylva            #+#    #+#             */
/*   Updated: 2022/04/15 21:57:43 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string &name, Weapon &weapon): _name(name) _type(weapon){}

HumanA::~HumanA(void)
{
	std::cout << getName() << " goes home" << std::endl;
}

std::string		&HumanA::getName(void) const
{
	return(this->_name);
}

void	HumanA::setName(std::string &name)
{
	_name = name;
}

Weapon	&HumanA::getWeapon( void ) const
{
	return (_weapon);
}

void	HumanA::attack( void )
{
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}