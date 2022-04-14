#ifndef CONTACTS_CLASS_1_HPP
# define CONTACTS_CLASS_1_HPP
# pragma once
# include <string>

class Contacts
{

	public:

		bool		field;
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNubmer;
		std::string	darkestSecret;

		Contacts( void );

};
#endif