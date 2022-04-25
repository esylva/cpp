/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 12:21:17 by esylva            #+#    #+#             */
/*   Updated: 2022/04/25 12:23:46 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
		Brain(void);
		Brain(const Brain& copy);
		virtual ~Brain(void);

		Brain&	operator=(const Brain& obj);

		std::string* get_ideas(void);

	protected:
		std::string	_ideas[100];
};

std::ostream&	operator<<(std::ostream& o, const Brain& brain);

#endif