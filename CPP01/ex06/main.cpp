/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:58:45 by esylva            #+#    #+#             */
/*   Updated: 2022/04/21 12:44:45 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char** argv)
{
	Harl h;

	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	if (argc != 2)
	{
		std::cout
			<< "Type an arg to filter what Harl says:"
			<< std::endl
			<< "It can be DEBUG, INFO, WARNING or ERROR to filter "
			<< "or anything to total ignore"
			<< std::endl;
		return (1);
	}
	else
	{
		for (int i = 0; i < 4; i++)
		{
			if (argv[1] == levels[i])
			{
				h.complain(argv[1]);
				return (0);
			}
		}
	}
	std::cout << "You found a \"Total ignore\"!" << std::endl;
	return (0);
}
