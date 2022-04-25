/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:47:52 by esylva            #+#    #+#             */
/*   Updated: 2022/04/25 11:47:52 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <string>
# include <iostream>
class WrongAnimal 
{
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& copy);
		virtual ~WrongAnimal(void);

		WrongAnimal&	operator=(const WrongAnimal& obj);

		void			set_type(std::string type);
		std::string		get_type(void) const;

		void	makeSound(void) const;

	protected:
		std::string		_type;
};

std::ostream&	operator<<(std::ostream& o, const WrongAnimal& wrong_animal);

#endif
