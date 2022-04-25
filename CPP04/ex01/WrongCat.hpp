/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:48:05 by esylva            #+#    #+#             */
/*   Updated: 2022/04/25 11:48:05 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(const WrongCat& copy);
		~WrongCat(void);

		WrongCat& operator=(const WrongCat& obj);

		void	makeSound(void) const;
};

std::ostream&	operator<<(std::ostream& o, const WrongCat& wrong_cat);

#endif
