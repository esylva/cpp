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

HumanB::HumanB(void){}

HumanB::HumanB(std::string _type): _type(_type){}

HumanB::~HumanB(void)
{
	std::cout << this->getType() << " goes home" << std::endl;
}

std::string		HumanB::getType(void) const
{
	return(this->_type);
}

void	HumanB::setType(std::string type)
{
	_type = type;
}
// Now, create two classes: HumanA and HumanB. They both have a Weapon and a
// name. They also have a member function attack() that displays (of course, without the
// angle brackets):
// <name> attacks with their <weapon type>
// HumanA and HumanB are almost the same except for these two tiny details:
// • While HumanA takes the Weapon in its constructor, HumanB doesn’t.
// • HumanB may not always have a Weapon, whereas HumanA will always be armed.
