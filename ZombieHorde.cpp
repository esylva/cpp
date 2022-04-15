/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:07:25 by esylva            #+#    #+#             */
/*   Updated: 2022/04/15 18:34:01 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie	*z;

	if (N < 1)
	{
		std::cout << "Wrond quantity" << std::endl;
		return (0);
	}
	z = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		z[i].set_name(name);
		z[i].set_name(z[i].get_name().append(" from the Horde"));
		z[i].announce();
	}
	return (&z[0]);
}
