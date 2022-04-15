/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:51:11 by esylva            #+#    #+#             */
/*   Updated: 2022/04/15 08:59:07 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){}

Zombie::Zombie(std::string name): _name(name){}

Zombie::~Zombie(void)
{
	std::cout << this->get_name() << " dying again" << std::endl;
}

std::string		Zombie::get_name(void) const
{
	return(this->_name);
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
}

void	Zombie::announce(void)
{
	std::cout << get_name() << " BraiiiiiiinnnzzzZ..." << std::endl;
}
