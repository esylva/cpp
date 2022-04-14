/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 09:29:49 by esylva            #+#    #+#             */
/*   Updated: 2022/04/10 09:29:49 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
# include <iostream>
# include <string>
# include <iomanip>
# include <cstdlib>


class Contact
{
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
	

public:
	Contact();
	~Contact();

	void set_contact(void);

	std::string	get_first_name(void) const;
	std::string	get_last_name(void) const;
	std::string	get_nickname(void) const;
	std::string	get_phone_number(void) const;
	std::string	get_darkest_secret(void) const;

	void		set_darkest_secret(std::string darkest_secret);
	void		set_first_name(std::string first_name);
	void		set_last_name(std::string last_name);
	void		set_nickname(std::string nickname);		
	void		set_phone_number(std::string phone_number);
};
#endif
