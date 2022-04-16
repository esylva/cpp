/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:47:08 by esylva            #+#    #+#             */
/*   Updated: 2022/04/15 21:49:14 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA
{
	private:
		std::string	_name;
		Weapon		&_weapon;
		
	public:
		HumanA(std::string &name, Weapon &weapon);
		~HumanA();

		std::string &get_name(void) const;
		void		set_name(std::string &name);
		Weapon		&get_weapon(void) const;
		void		attack(void);
};


#endif
