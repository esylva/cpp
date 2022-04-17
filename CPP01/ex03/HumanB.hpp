/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:07:25 by esylva            #+#    #+#             */
/*   Updated: 2022/04/15 21:47:26 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string	_name;
		const Weapon		*_weapon;
		
	public:
		HumanB(const std::string &name);
		HumanB(const std::string &name, const Weapon &weapon);

		~HumanB();

		const std::string &getName(void) const;
		const Weapon		*getWeapon(void) const;
		void		setName(const std::string &name);
		void		setWeapon(const Weapon &weapon);
		void		attack(void) const;
};

#endif
