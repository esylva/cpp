/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:58:45 by esylva            #+#    #+#             */
/*   Updated: 2022/04/15 21:40:53 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	std::cout << std::endl;
	Weapon gun1 = Weapon("gun");
	HumanA alex("Alex", gun1);
	alex.attack();
	gun1.setType("shotgun");
	alex.attack();
	std::cout << std::endl;
	Weapon gun2 = Weapon("knife");
	HumanB bob("Bob");
	bob.attack();
	bob.setWeapon(gun1);
	bob.attack();
	bob.setWeapon(gun2);
	bob.attack();
	std::cout << std::endl;
	HumanB lea("Lea", gun1);
	lea.attack();
	return (0);
}
