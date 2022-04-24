/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 10:45:06 by esylva            #+#    #+#             */
/*   Updated: 2022/04/24 10:45:06 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap::ClapTrap() {}

FragTrap::FragTrap(const std::string &name): ClapTrap(name) {
	
	std::cout << "FragTrap " << this->getName() << " is preparing." << std::endl << 
	"My hp is " << this->getHitPoints() << ", energy is " << this->getEnergyPoints() << 
	", attack power is " << this->getAtackDamage() << std::endl;	
	
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAtackDamage(30);

	std::cout << "FragTrap " << this->getName() << " ready to serve." << std::endl << 
	"My hp is " << this->getHitPoints() << ", energy is " << this->getEnergyPoints() << 
	", attack power is " << this->getAtackDamage() << std::endl;
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
