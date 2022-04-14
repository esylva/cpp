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
/*
On program start-up, the phonebook is empty and the user is prompted to enter one
of three commands. The program only accepts ADD, SEARCH and EXIT.
• ADD: save a new contact
◦ If the user enters this command, they are prompted to input the information
of the new contact one field at a time. Once all the fields have been completed,
add the contact to the phonebook.
◦ The contact fields are: first name, last name, nickname, phone number, and
darkest secret. A saved contact can’t have empty fields.
• SEARCH: display a specific contact
◦ Display the saved contacts as a list of 4 columns: index, first name, last
name and nickname.
◦ Each column must be 10 characters wide. A pipe character (’|’) separates
them. The text must be right-aligned. If the text is longer than the column,
it must be truncated and the last displayable character must be replaced by a
dot (’.’).
◦ Then, prompt the user again for the index of the entry to display. If the index
is out of range or wrong, define a relevant behavior. Otherwise, display the
contact information, one field per line.
• EXIT
◦ The program quits and the contacts are lost forever!
• Any other input is discarded.
Once a command has been correctly executed, the program waits for another one. It
stops when the user inputs EXIT.
Give a relevant name to your executable.
*/

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
