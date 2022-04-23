/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 00:04:28 by esylva            #+#    #+#             */
/*   Updated: 2022/04/24 00:04:28 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {}

ScavTrap::ScavTrap(const std::string &_name)
	: ClapTrap(_name)
{
	hp = 100;
	energy = 50;
	damage = 20;
	std::cout << "  ScavTrap <" << name << "> has come with attributes:\n";
	std::cout << "    hp <" << hp << ">, energy <" << energy << ">, damage <" <<
		damage << ">\n";
}

ScavTrap::ScavTrap(const ScavTrap &cpy)
	: ClapTrap(cpy)
{
	hp = 100;
	energy = 50;
	damage = 20;
	std::cout << "  ScavTrap <" << name << "> has been cloned with attributes:\n";
	std::cout << "    hp <" << hp << ">, energy <" << energy << ">, damage <" <<
		damage << ">\n";
}

void
ScavTrap::attack(const std::string &target) const
{
	std::cout << "  ScavTrap <" << name << "> attack <" << target << ">, causing "
		"<" << damage << "> points of damage!\n";
}

void
ScavTrap::guardGate() const
{
	std::cout << "  ScavTrap <" << name << "> have enterred in GateKeeper mode\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "  ScavTrap <" << name << "> has been obliterated\n";
}