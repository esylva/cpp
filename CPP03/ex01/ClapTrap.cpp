/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 00:04:16 by esylva            #+#    #+#             */
/*   Updated: 2022/04/24 00:04:16 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){}

ClapTrap::ClapTrap(const std::string &name): _name(name), _hp(10), _energy(10), _damage(0) {
	std::cout << std::endl << "ClapTrap " << _name << " greets you!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy): _name(cpy._name), _hp(cpy._hp), _energy(cpy._energy), _damage(cpy._damage) {
		std::cout << "ClapTrap " << _name << " Cloning himself!" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << _name << " returns home." << std::endl;
}

ClapTrap & ClapTrap::operator =(const ClapTrap &cpy)
{
	_name = cpy._name;
	_hp = cpy._hp;
	_energy = cpy._energy;
	_damage = cpy._damage;
	return *this;
}

std::string	ClapTrap::getName(void) const {
	return _name;
}

int		ClapTrap::getAtackDamage( void ) const {
	return _damage;
}

int		ClapTrap::getEnergyPoints( void ) const {
	return _energy;
}

int		ClapTrap::getHitPoints( void ) const {
	return _hp;
}

void		ClapTrap::setName(std::string name){
	this->_name = name;
}


void	ClapTrap::setAtackDamage( int atackDamage ) {
	this->_damage = atackDamage;
}

void	ClapTrap::setEnergyPoints( int energy ) {
	this->_energy = energy;
}
void	ClapTrap::setHitPoints(  int hp ) {
	this->_hp = hp;
}

// internal functions

void ClapTrap::attack(const std::string &target) {
	if (getEnergyPoints() == 0 || getHitPoints() == 0) {
		std::cout << "I can't attack, because I'm so damn tired" << std::endl;	
	}
	else {
		std::cout << "ClapTrap "<< this->getName() << " attacks " << target << ", causing "  << this->getAtackDamage() << std::endl;
		setEnergyPoints(this->getEnergyPoints() - 1);
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << _name << " takes " << amount << " damage" << std::endl;
		setHitPoints(getHitPoints() - amount);
		if (getHitPoints() < 0){
			setHitPoints(0);
			std::cout << "God blessed me! I'm still alive, but i can't do something" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0) {
		std::cout << "ClapTrap " << _name << " healed " << amount << " hit points" << std::endl;
		setHitPoints(this->_hp + amount);
		setEnergyPoints(this->_energy - 1);
	}
	else {
		std::cout << "I can't healing, because I'm so damn tired" << std::endl;
	}
}

// external functions

std::ostream&	operator<<(std::ostream& o, const ClapTrap& clap_trap) {
	o
		<< "[STATUS] "
		<< clap_trap.getName()
		<< " - Hit Points:"
		<< clap_trap.getHitPoints()
		<< " Energy Points:"
		<< clap_trap.getEnergyPoints()
		<< " Atack Damage:"
		<< clap_trap.getAtackDamage()
		<< std::endl;
	return (o);
}
