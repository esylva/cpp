/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 23:11:47 by esylva            #+#    #+#             */
/*   Updated: 2022/04/09 23:11:47 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int argc, char **argv) 
{
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; j < (int)strlen(argv[i]); j++)
		{
			std::cout << (char)std::toupper(argv[i][j]);
		}
	}
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return 0;
}
