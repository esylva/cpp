#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# pragma once
# include "Contact.class_1.hpp"

class PhoneBook
{
public: 

	Contacts	contacts[8];
	int			currentIndex;

	PhoneBook( void ); 

	void	add( void );
	void	search( void );

};
#endif