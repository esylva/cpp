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

HumanA::HumanA(const std::string &name, Weapon &weapon): _name(name), _weapon(weapon)
{
	std::cout << "Hi! My name is " << getName() << ". I have a " << _weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << getName() << " goes home" << std::endl;
}

const std::string		&HumanA::getName(void) const
{
	return(_name);
}

void	HumanA::setName(const std::string &name)
{
	_name = name;
}

Weapon	&HumanA::getWeapon(void) const
{
	return (_weapon);
}

void	HumanA::attack(void) const
{
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}