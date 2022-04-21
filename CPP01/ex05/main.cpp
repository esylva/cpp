/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:58:45 by esylva            #+#    #+#             */
/*   Updated: 2022/04/21 10:59:52 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl h;
	
	std::string	levels[4] =
	{
		"WARNING",	
		"ERROR",	
		"DEBUG",
		"INFO",
	};
	
	for (int i = 0; i < 4; i++){
		h.complain(levels[i]);
	}

	return (0);
}