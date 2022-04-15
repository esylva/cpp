/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:58:45 by esylva            #+#    #+#             */
/*   Updated: 2022/04/15 21:06:34 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*stringPTR = &brain;
	std::string	&stringREF = brain;

	std::cout << "Address of the variable:    " << &brain << std::endl;
	std::cout << "Address of the stringPTR:   " << stringPTR << std::endl;
	std::cout << "Address of the stringREF:   " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "Value of the variable:   " << brain << std::endl;
	std::cout << "Value of the stringPTR:  " << *stringPTR << std::endl;
	std::cout << "Value of the stringREF:  " << stringREF << std::endl;
	std::cout << std::endl;

	return (0);
}
