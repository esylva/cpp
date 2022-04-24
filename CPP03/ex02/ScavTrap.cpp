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
	int ScavTrap::_initHP = 100;
	int ScavTrap::_initEP = 50;
	int ScavTrap::_initAD = 20;

ScavTrap::ScavTrap(): ClapTrap::ClapTrap() {}

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name) {
	
	std::cout << "  ScavTrap " << this->getName() << " is preparing." << std::endl << 
	"My hp is " << this->getHitPoints() << ", energy is " << this->getEnergyPoints() << 
	", attack power is " << this->getAtackDamage() << std::endl;	
	
	this->setName(name);
	this->setHitPoints(_initHP);
	this->setEnergyPoints(_initEP);
	this->setAtackDamage(_initAD);

	std::cout << "  ScavTrap " << this->getName() << " ready to serve." << std::endl << 
	"My hp is " << this->getHitPoints() << ", energy is " << this->getEnergyPoints() << 
	", attack power is " << this->getAtackDamage() << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cpy) : ClapTrap(cpy) {
	this->setName(cpy.getName());
	this->setHitPoints(cpy.getHitPoints());
	this->setEnergyPoints(cpy.getHitPoints());
	this->setAtackDamage(cpy.getAtackDamage());

	std::cout << "  ScavTrap <" << this->getName() << "> has been cloned."  << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->getName() << " destroed." << std::endl;
}

ScavTrap & ScavTrap::operator =(const ScavTrap &cpy) {
	if (this != &cpy) {
		this->setName(cpy.getName());
		this->setHitPoints(cpy.getHitPoints());
		this->setEnergyPoints(cpy.getHitPoints());
		this->setAtackDamage(cpy.getAtackDamage());		
	}
	return *this;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->getName() << " have enterred in GateKeeper mode" << std::endl;
	setAtackDamage(this->getAtackDamage() + 50);
	std::cout << "Attack damage increased" << std::endl; 
}

void ScavTrap::attack(const std::string &target) {
	if (getEnergyPoints() == 0 || getHitPoints() == 0) {
		std::cout << "I can't attack, because I'm so damn tired" << std::endl;	
	}
	else {
		std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing "  << this->getAtackDamage() << " points of damage!" << std::endl;
		setEnergyPoints(this->getEnergyPoints() - 1);
	}
}
