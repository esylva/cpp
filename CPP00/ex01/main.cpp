/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 21:56:44 by esylva            #+#    #+#             */
/*   Updated: 2022/04/12 21:56:44 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

int	main( void )
{
	std::string command;
	PhoneBook	phonebook;

	while (1) 
	{
		std::cout << "Enter one of the commands: ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, command);
		if (command == "ADD" || command == "add") 
			phonebook.add();
		else if (command == "SEARCH" || command == "search")
			phonebook.search();
		else if (std::cin.eof() || command == "EXIT" || command == "exit")
			break;
		else
			std::cout << "You enter wrong command, please try again\n";
	}
	return 0;
}
