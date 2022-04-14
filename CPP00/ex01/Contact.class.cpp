/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 23:12:08 by esylva            #+#    #+#             */
/*   Updated: 2022/04/09 23:12:08 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.class.hpp"

Contact::Contact(){}

Contact::~Contact(){}

std::string	Contact::get_first_name(void) const
{
	return (this->_first_name);
}

std::string	Contact::get_last_name(void) const
{
	return (this->_last_name);
}

std::string	Contact::get_nickname(void) const
{
	return (this->_nickname);
}

std::string	Contact::get_phone_number(void) const
{
	return (this->_phone_number);
}

std::string	Contact::get_darkest_secret(void) const
{
	return (this->_darkest_secret);
}

void	Contact::set_first_name(std::string first_name)
{
	this->_first_name = first_name;
}

void	Contact::set_last_name(std::string last_name)
{
	this->_last_name = last_name;
}

void	Contact::set_nickname(std::string nickname)
{
	this->_nickname = nickname;
}

void	Contact::set_phone_number(std::string phone_number)
{
	this->_phone_number = phone_number;
}
void	Contact::set_darkest_secret(std::string darkest_secret)
{
	this->_darkest_secret = darkest_secret;
}



void 	Contact::set_contact(void)
{
	std::string	field;

	std::cout << "Enter the first name:" <<std::endl;
	std::getline(std::cin, field);	
	if (std::cin.eof())
	{
		std::cout << "Fatal error. Exit." << std::endl;
		exit (1);
	}
	else if (field.empty())
	{
		std::cout << "Please try again\n" << std::endl;
		return;
	}
	else
		set_first_name(field);

	std::cout << "Enter the last name:" <<std::endl;
	std::getline(std::cin, field);	
	if (std::cin.eof())
	{
		std::cout << "Fatal error. Exit." << std::endl;
		exit (1);
	}		
	else if (field.empty())
	{
		std::cout << "Please try again\n" << std::endl;
		return;
	}
	else
		set_last_name(field);

	std::cout << "Enter the nickname:" <<std::endl;
	std::getline(std::cin, field);	
	if (std::cin.eof())
	{
		std::cout << "Fatal error. Exit." << std::endl;
		exit (1);
	}		
	else if (field.empty())
	{
		std::cout << "Please try again\n" << std::endl;
		return;
	}
	else
		set_nickname(field);

	std::cout << "Enter the phone number:" <<std::endl;
	std::getline(std::cin, field);	
	if (std::cin.eof())
	{
		std::cout << "Fatal error. Exit." << std::endl;
		exit (1);
	}		
	else if (field.empty())
	{
		std::cout << "Please try again\n" << std::endl;
		return;
	}
	else
		set_phone_number(field);

	std::cout << "Enter the darkest secret:" <<std::endl;
	std::getline(std::cin, field);	
	if (std::cin.eof())
	{
		std::cout << "Fatal error. Exit." << std::endl;
		exit (1);
	}		
	else if (field.empty())
	{
		std::cout << "Please try again\n" << std::endl;
		return;
	}
	else
		set_darkest_secret(field);
}
