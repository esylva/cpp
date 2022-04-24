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

ScavTrap::ScavTrap(): ClapTrap::ClapTrap() {}

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name) {
	
	std::cout << "  ScavTrap " << this->getName() << " is preparing." << std::endl << 
	"My hp is " << this->getHitPoints() << ", energy is " << this->getEnergyPoints() << 
	", attack power is " << this->getAtackDamage() << std::endl;	
	
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAtackDamage(20);

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
	std::cout << "ScavTrap <" << this->getName() << "> have enterred in GateKeeper mode" << std::endl;
	setAtackDamage(this->getAtackDamage() + 50);
	std::cout << "Attack damage increased" << std::endl; 
}
