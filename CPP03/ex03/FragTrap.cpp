/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 10:45:06 by esylva            #+#    #+#             */
/*   Updated: 2022/04/25 20:01:19 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

	int FragTrap::_initHP = 100;
	int FragTrap::_initEP = 100;
	int FragTrap::_initAD = 30;

FragTrap::FragTrap(): ClapTrap::ClapTrap() {
	this->setName("dummy");
	this->setHitPoints(FragTrap::_initHP);
	this->setEnergyPoints(FragTrap::_initEP);
	this->setAtackDamage(FragTrap::_initAD);
}

FragTrap::FragTrap(const std::string &name): ClapTrap(name) {
	
	std::cout << "FragTrap " << this->getName() << " is preparing." << std::endl << 
	"My hp is " << this->getHitPoints() << ", energy is " << this->getEnergyPoints() << 
	", attack power is " << this->getAtackDamage() << std::endl << std::endl;	
	
	this->setName(name);
	this->setHitPoints(FragTrap::_initHP);
	this->setEnergyPoints(FragTrap::_initEP);
	this->setAtackDamage(FragTrap::_initAD);

	std::cout << "FragTrap " << this->getName() << " ready to serve." << std::endl << 
	"My hp is " << this->getHitPoints() << ", energy is " << this->getEnergyPoints() << 
	", attack power is " << this->getAtackDamage() << std::endl << std::endl;
}

FragTrap::FragTrap(const FragTrap &cpy) : ClapTrap(cpy) {
	this->setName(cpy.getName());
	this->setHitPoints(cpy.getHitPoints());
	this->setEnergyPoints(cpy.getHitPoints());
	this->setAtackDamage(cpy.getAtackDamage());

	std::cout << "  FragTrap <" << this->getName() << "> has been cloned."  << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->getName() << " destroed." << std::endl;
}

FragTrap & FragTrap::operator =(const FragTrap &cpy) {
	if (this != &cpy) {
		this->setName(cpy.getName());
		this->setHitPoints(cpy.getHitPoints());
		this->setEnergyPoints(cpy.getHitPoints());
		this->setAtackDamage(cpy.getAtackDamage());		
	}
	return *this;
}

void FragTrap::attack(const std::string &target) {
	if (getEnergyPoints() == 0 || getHitPoints() == 0) {
		std::cout << "I can't attack, because I'm so damn tired" << std::endl;	
	}
	else {
		std::cout << "FragTrap " << this->getName() << " attacks " << target << ", causing "  << this->getAtackDamage() << " points of damage!" << std::endl;
		setEnergyPoints(this->getEnergyPoints() - 1);
	}
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << this->getName() << " gives you five" << std::endl;
 
}
