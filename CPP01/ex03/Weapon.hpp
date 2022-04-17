/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:47:08 by esylva            #+#    #+#             */
/*   Updated: 2022/04/15 21:26:37 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include <string>

class Weapon
{
	private:
		std::string	_type;
		
	public:
		Weapon();
		Weapon(const std::string &type);
		~Weapon();

		const std::string &getType(void) const;
		void		setType(const std::string &type);
};

#endif
