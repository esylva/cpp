/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 00:03:57 by esylva            #+#    #+#             */
/*   Updated: 2022/04/24 00:03:57 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap	redWarrior ("Beaver");
	DiamondTrap	whiteWarrior("Donkey");

	std::cout << std::endl;
	redWarrior.attack(whiteWarrior.getName());
	std::cout << redWarrior << std::endl;
	whiteWarrior.takeDamage(redWarrior.getAtackDamage());
	std::cout << whiteWarrior << std::endl;
	whiteWarrior.beRepaired(redWarrior.getAtackDamage());
	std::cout << std::endl;

	whiteWarrior.attack(redWarrior.getName());
	redWarrior.takeDamage(whiteWarrior.getAtackDamage());
	std::cout << std::endl;

	redWarrior.guardGate();
	std::cout << redWarrior << std::endl;

	redWarrior.attack(whiteWarrior .getName());
	whiteWarrior.takeDamage(redWarrior.getAtackDamage());
	std::cout << std::endl;
	redWarrior.attack(whiteWarrior .getName());
	whiteWarrior.takeDamage(redWarrior.getAtackDamage());
	std::cout << whiteWarrior << std::endl;
	whiteWarrior.beRepaired(redWarrior.getAtackDamage());
	std::cout << std::endl;

	whiteWarrior.highFivesGuys();
	redWarrior.highFivesGuys();
	std::cout << std::endl;

	whiteWarrior.whoAmI();
	redWarrior.whoAmI();

	std::cout << redWarrior << std::endl;
	std::cout << whiteWarrior << std::endl;

	return (0);
}
