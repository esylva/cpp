/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 15:45:06 by esylva            #+#    #+#             */
/*   Updated: 2022/04/25 16:03:57 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource& copy);
		virtual ~MateriaSource(void);

		MateriaSource&	operator=(const MateriaSource& obj);

		void			learnMateria(AMateria* m);
		AMateria*		createMateria(const std::string& type);

	private:
		AMateria*		_materia[4];
};

#endif
