/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 00:03:31 by esylva            #+#    #+#             */
/*   Updated: 2022/04/24 00:03:31 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	cleric ("Futher Tuck");
	ClapTrap	rougue ("Robin Hood");

	std::cout << std::endl;
	rougue.setAtackDamage(5);
	std::cout << std::endl;
	
	rougue.attack(cleric.getName());
	std::cout << rougue << std::endl;
	cleric .takeDamage(5);
	std::cout << cleric << std::endl;
	cleric .beRepaired(5);
	std::cout << std::endl;

	rougue.setAtackDamage(10);
	std::cout << std::endl;

	rougue.attack(cleric .getName());
	std::cout << std::endl;
	cleric .takeDamage(10);
	std::cout << std::endl;
	rougue.attack(cleric .getName());
	std::cout << std::endl;
	cleric .takeDamage(10);
	std::cout << std::endl;
	std::cout << rougue << std::endl;
	std::cout << cleric << std::endl;
	return (0);
}
