/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 09:29:49 by esylva            #+#    #+#             */
/*   Updated: 2022/04/10 09:29:49 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
