/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 22:32:03 by esylva            #+#    #+#             */
/*   Updated: 2022/04/24 22:32:03 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>


class Animal
{
	public:
		Animal();
		Animal(const std::string &type);
		Animal(const Animal &copy);
		virtual ~Animal();
		Animal &operator=(const Animal &obj);
		
		void			setType(std::string type);
		std::string		getType(void) const;

		virtual void makeSound() const;

	protected:
		std::string _type;
};
	std::ostream&	operator<<(std::ostream& o, const Animal& animal);

#endif
