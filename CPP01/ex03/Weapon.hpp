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
		std::string	_name;
		
	public:
		Weapon();
		Weapon(std::string _name);
		Weapon(std::string _name, _type);
		~Weapon();

		std::string getType(void) const;
		void		setType(std::string type);
};

#endif
