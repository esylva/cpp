#include <cstring>
#include <string>
#include <iostream>
#include "PhoneBook.class_1.hpp"

int	main( void ) {

	std::string command;
	PhoneBook	phonebook;

	std::cout << "Enter one of the commands: ADD, SEARCH or EXIT:\n";
	while (1) {
		std::getline(std::cin, command);
		if (command == "ADD") {
			phonebook.add();
		}
		else if (command == "SEARCH")
		{
			phonebook.search();
		}
		else if (command == "EXIT")
			return 0;
		else {
			std::cout << "You enterd wrong command, please try again\n";
		}
	}
	return 0;
}
