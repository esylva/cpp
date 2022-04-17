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

HumanB::HumanB(const std::string &name): _name(name), _weapon(NULL)
{
	std::cout << "Hi! My name is " << getName() << ". I haven't weapon." << std::endl;
}

HumanB::HumanB(const std::string &name, const Weapon &weapon):
	_name(name), _weapon(&weapon)
{
	std::cout << "Hi! My name is " << getName() << ". I have a " << _weapon->getType() << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << getName() << " goes home" << std::endl;
}

const std::string		&HumanB::getName(void) const
{
	return(_name);
}

void	HumanB::setName(const std::string &name)
{
	_name = name;
}

const Weapon	*HumanB::getWeapon(void) const
{
	return (_weapon);
}

void	HumanB::setWeapon(const Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack( void ) const
{
    if (_weapon)
		std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " hasn't weapon." << std::endl;
}