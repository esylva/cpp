/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 11:04:13 by esylva            #+#    #+#             */
/*   Updated: 2022/04/24 11:04:13 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &_name)
    : ClapTrap(_name + "_clap_name"), ScavTrap(_name), FragTrap(_name)
{
	name = _name;
	std::cout << "    DiamondTrap <" << name << "> has come with attributes:\n";
	std::cout << "      hp <" << hp << ">, energy <" << energy << ">, damage <" <<
			  damage << ">\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &cpy)
	: ClapTrap(), ScavTrap(), FragTrap()
{
	name = cpy.name;
	ClapTrap::name = name + "_clap_name";
	hp = cpy.hp;
	energy = cpy.energy;
	damage = cpy.damage;
}

DiamondTrap::~DiamondTrap() {}

void DiamondTrap::whoAmI() const
{
//	std::cout << "    DiamondTrap <" << name << "> The Diamond Trap, rose by"
//		"Frag <" << FragTrap::name << "> and Clap <" << ClapTrap::name << ">\n";
}
