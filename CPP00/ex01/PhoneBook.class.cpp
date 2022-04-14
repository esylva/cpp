/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 09:29:49 by esylva            #+#    #+#             */
/*   Updated: 2022/04/10 09:29:49 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Wellcome to PhoneBook!" << std::endl;
	this->currentIndex = -1;
	this->num_contacts = 0;

}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook says: \"Good Bye!\"" <<std::endl;
}


void	PhoneBook::add(void)
{
std::cout << "Please input the information of the new contact one field at a time" <<std::endl;
	this->currentIndex++;
	if (this->currentIndex == 8)
		this->currentIndex = 0;
	this->contacts[this->currentIndex].set_contact();
}

void	PhoneBook::search(void) 
{
	std::string		choice;
	int				id;

	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname";
	std::cout << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if ((contacts[i].get_first_name().size() == 0))
			break;
		num_contacts = i + 1;
		std::cout << std::setw(10) << i + 1 << "|";
		if (contacts[i].get_first_name().size() <= 10)
			std::cout << std::setw(10) << contacts[i].get_first_name() << "|";
		else
			std::cout << std::setw(10) << contacts[i].get_first_name().substr(0, 9).append(".") << "|";

		if (contacts[i].get_last_name().size() <= 10)
			std::cout << std::setw(10) << contacts[i].get_last_name() << "|";
		else
			std::cout << std::setw(10) << contacts[i].get_last_name().substr(0, 9).append(".") << "|";

		if (contacts[i].get_nickname().size() <= 10)
			std::cout << std::setw(10) << contacts[i].get_nickname() << std::endl;
		else
			std::cout << std::setw(10) << contacts[i].get_nickname().substr(0, 9).append(".") << std::endl;
	}
	std::cout << "Enter index of contact: ";
	std::getline(std::cin, choice);
	if (std::cin.eof())
	{
		std::cout << "Fatal error. Exit." << std::endl;
		exit (1);
	}
	if (!isdigit(choice[0]) || choice.size() != 1)
	{
		std::cout << "Wrong choice" << std::endl;
		return;
	}
	id = choice[0] - '0' - 1;
	if (id < 0 || id > 7 || id >= num_contacts)
	{
		std::cout << "Wrong choice" << std::endl;
		return;
	}
	std::cout << "first name: " << contacts[id].get_first_name() << std::endl;
	std::cout << "last name: " << contacts[id].get_last_name() << std::endl;
	std::cout << "nickname: " << contacts[id].get_nickname() << std::endl;
	std::cout << "phone number: " << contacts[id].get_phone_number() << std::endl;
	std::cout << "darkest secret: " << contacts[id].get_darkest_secret() << std::endl;
}
