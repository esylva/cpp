#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# include "Contact.class.hpp"

class PhoneBook
{

private:

	Contact	contacts[8];
	int	currentIndex;
	int	num_contacts;


public: 
	PhoneBook(void);
	~PhoneBook(void);
	void	add( void );
	void	search( void );
};
#endif
// #ifndef CLASSPHONEBOOK_HPP
// # define CLASSPHONEBOOK_HPP

// #include <iostream>
// #include <string>
// #include <iomanip>
// #include "ClassContacts.hpp"

// #define RESET		"\e[0m"
// #define PINK		"\e[0;38;5;199m"
// #define LILAC		"\e[0;38;5;13m"
// #define PURPLE		"\e[0;38;5;93m"
// #define BOLD_RED	"\e[1;31m"
// #define BLUE		"\e[0;34m"
// #define V_CYAN		"\e[0;38;5;44m"

// class Phonebook
// {
// 	public:

// 		Phonebook(void);
// 		~Phonebook(void);

// 		Contacts	contact[8];
// };

// /*
// ** main.cpp
// */
// int			main(void);
// std::string	print_welcome_message(std::string command);

// /*
// ** add.cpp
// */
// Contacts	add_new_contact(void);

// /*
// ** search.cpp
// */
// void		show_all_contacts(Contacts contact[8], int num_contacts);
// void		choose_contact(Contacts contact[8], int num_contacts);
// void		print_contacts(int id, std::string first_name,
// 				std::string last_name, std::string nickname);
// std::string	trim(std::string info);

// #endif