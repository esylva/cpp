/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:58:45 by esylva            #+#    #+#             */
/*   Updated: 2022/04/15 09:00:43 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	zombie;

	std::cout << std::endl;
	zombie.set_name("Stack Zombie");
	zombie.announce();
	std::cout << std::endl;

	randomChump("Heeeeeeap Zombie");
	return (0);
}
