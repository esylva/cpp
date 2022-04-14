#include "PhoneBook.clas_1.hpp"
#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>

void	PhoneBook::add( void )
{
	int	i;

	this->currentIndex++;
	if (this->currentIndex == 8)
		this->currentIndex = 0;
	i = this->currentIndex;
	std::cout << "Enter first name: ";
	std::getline(std::cin, this->contacts[i].firstName);
	std::cout << "Enter last name: ";
	std::getline(std::cin, this->contacts[i].lastName);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, this->contacts[i].nickname);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, this->contacts[i].phoneNubmer);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, this->contacts[i].darkestSecret);
	this->contacts[i].field = true;
}

void	PhoneBook::search( void ) 
{
	std::string		choise;
	int				lastField = 100;
	int				id;

	if (!this->contacts[0].field) {
		std::cout << "There is no filled contacts in this phone book\n";
		return;
	}
	std::cout << std::setw(12) << "index ";
	std::cout << std::setw(11) << "first name ";
	std::cout << std::setw(11) << "last name ";
	std::cout << std::setw(11) << "nickname ";
	std::cout << "\n";
	for (int i = 0; i < 8; i++)
	{
		if (!this->contacts[i].field)
		{
			lastField = i - 1;
			break;
		}
		std::cout << "|";
		std::cout << std::setw(10) << i + 1;
		std::cout << "|";
		if (this->contacts[i].firstName.size() <= 10)
			std::cout << std::setw(10) << this->contacts[i].firstName;
		else
			std::cout << this->contacts[i].firstName.substr(0, 9) << ".";
		std::cout << "|";
		if (this->contacts[i].lastName.size() <= 10)
			std::cout << std::setw(10) << this->contacts[i].lastName;
		else
			std::cout << this->contacts[i].lastName.substr(0, 9) << ".";
		std::cout << "|";
		if (this->contacts[i].nickname.size() <= 10)
			std::cout << std::setw(10) << this->contacts[i].nickname;
		else
			std::cout << this->contacts[i].nickname.substr(0, 9) << ".";
		std::cout << "|\n";
	}
	std::cout << "Enter index of needed contact: ";
	std::getline(std::cin, choise);
	if (!isdigit(choise[0]) || choise.size() != 1) {
		std::cout << "Incorrect input\n";
		return;
	}
	id = choise[0] - '0' - 1;
	if (id < 0 || id > 7 || id > lastField) {
		std::cout << "You enterd wrong index\n";
		return;
	}
	std::cout << "first name: " << this->contacts[id].firstName << "\n"
		<< "last name: " << this->contacts[id].lastName << "\n"
		<< "nickname: " << this->contacts[id].nickname << "\n"
		<< "phone number: " << this->contacts[id].phoneNubmer << "\n"
		<< "darkest secret: " << this->contacts[id].darkestSecret << "\n";
}

PhoneBook::PhoneBook( void )
{
	this->currentIndex = -1;
}
