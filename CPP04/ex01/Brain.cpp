/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 12:21:09 by esylva            #+#    #+#             */
/*   Updated: 2022/04/25 12:28:59 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain added" << std::endl;
}

Brain::Brain(const Brain& copy) {
	std::cout << "Brain cloned" << std::endl;
	*this = copy;
	return ;
}

Brain::~Brain(void) {
	std::cout << "Brain removed"<< std::endl;
}

Brain& Brain::operator=(const Brain& obj)
{
	if (this != &obj)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = obj._ideas[i];
	}
	return (*this);
}

std::string*	Brain::get_ideas(void)
{
	return (this->_ideas);
}

std::ostream&	operator<<(std::ostream& o, const Brain& brain)
{
	(void)brain;
	o << "Idea is: ";
	return o;
}
