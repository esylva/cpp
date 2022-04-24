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
	this->setName(name);
	// ClapTrap::name = this->name + "_clap_name";
	this->setHitPoints(FragTrap._initHP);
	this->setEnergyPoints(ScavTrap._initEP);
	this->setAtackDamage(FragTrap._initAD);
	
	std::cout << "DiamondTrap " << _name << " came to you" << std::endl <<
		"My HP is " << this->getHitPoints() << ", ENERGY is " << this->getEnergyPoints() << 
	", ATTACK POWER is " << this->getAtackDamage() << std::endl;
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
	std::cout << "I am DiamondTrap " << _name << " and ClapTrap " << ClapTrap::_name << std::endl;
}

std::string	DiamondTrap::getName(void) const
{
	return (this->_name);
}
void	DiamondTrap::setName(std::string name)
{
	this->_name = name;
}

void	DiamondTrap::attack(std::string const& target)
{
	ScavTrap::attack(target);
}