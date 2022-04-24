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

DiamondTrap::DiamondTrap(const std::string &name)
    : ClapTrap(name + "_clap_name")
	// , ScavTrap(name), FragTrap(name)
{
	this->name = name;
	// ClapTrap::name = this->name + "_clap_name";
		this->_hp = FragTrap::Hit_points;
	this->_energy = ScavTrap::Energy_points;
	this->_damage = FragTrap::Attack_damage;
	std::cout << "DiamondTrap " << _name << " came to you" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &cpy)
	: ClapTrap(), ScavTrap(), FragTrap()
{
	_name = cpy._name;
	ClapTrap::_name = _name + "_clap_name";
	_hp = cpy._hp;
	_energy = cpy._energy;
	_damage = cpy._damage;
}

DiamondTrap::~DiamondTrap() {}

void DiamondTrap::whoAmI() const {
	std::cout << "I am DiamondTrap " << name << " and ClapTrap " << ClapTrap::name << std::endl;
}
