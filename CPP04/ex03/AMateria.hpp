/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:13:31 by esylva            #+#    #+#             */
/*   Updated: 2022/04/25 15:58:43 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <string>
# include <iostream>
# include "ICharacter.hpp"

class AMateria {

	protected:
		std::string			_type;

	public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(const AMateria& copy);
		virtual ~AMateria(void);

		AMateria&			operator=(const AMateria& obj);

		std::string const&	getType() const; //Returns the materia type
		virtual AMateria*	clone() const = 0;
		virtual void 		use(ICharacter& target);
};

std::ostream&	operator<<(std::ostream& o, const AMateria& i);

#endif