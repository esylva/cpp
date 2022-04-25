/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 22:33:25 by esylva            #+#    #+#             */
/*   Updated: 2022/04/24 22:33:25 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &copy);
		virtual ~Dog();
		Dog &operator=(const Dog &obj);

		void makeSound() const;

};
	std::ostream&	operator<<(std::ostream& o, const Dog& dog);

#endif
