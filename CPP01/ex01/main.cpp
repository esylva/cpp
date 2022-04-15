/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:58:45 by esylva            #+#    #+#             */
/*   Updated: 2022/04/15 18:38:21 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombies;
	int		N;
	std::string	name;

	N = 5;
	name = "Sidor";
	std::cout << std::endl;
	zombies = zombieHorde(N, name);
	std::cout << std::endl;
	delete []zombies;

	return (0);
}

// Time to create a horde of Zombies!
// Implement the following function in the appropriate file:
// Zombie* zombieHorde( int N, std::string name );
// It must allocate N Zombie objects in a single allocation. Then, it has to initialize the
// zombies, giving each one of them the name passed as parameter. The function returns a
// pointer to the first zombie.
// Implement your own tests to ensure your zombieHorde() function works as expected.
// Try to call announce() for each one of the zombies.
// Don’t forget to delete all the zombies and check for memory leaks.
