/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 22:33:25 by esylva            #+#    #+#             */
/*   Updated: 2022/04/24 22:33:25 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *_brain;

	public:
		Cat();
		Cat(const Cat &copy);
		virtual ~Cat();
		Cat &operator =(const Cat &obj);

		void makeSound() const;

};
	std::ostream&	operator<<(std::ostream& o, const Cat& cat);

#endif
