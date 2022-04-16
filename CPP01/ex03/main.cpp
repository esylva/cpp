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
	Weapon gun1("gun");
	HumanA anna("Anna", gun);
	anna.attack();
	gun.setType("shotgun");
	anna.attack();
	Weapon gun2("knife");
	HumanB Bob("Bob");
	bob.attack();
	bob.setWeapon(gun1);
	bob.attack();
	bob.setWeapon(gun2);
	bob.attack()
	return (0);
}
