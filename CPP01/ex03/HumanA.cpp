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

HumanA::HumanA(void){}

HumanA::HumanA(Weapon type): _type(_type){}

HumanA::~HumanA(void)
{
	std::cout << this->getType() << " goes home" << std::endl;
}

std::string		HumanA::getType(void) const
{
	return(this->_type);
}

void	HumanA::setType(std::string type)
{
	_type = type;
}
