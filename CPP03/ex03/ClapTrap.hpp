/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 00:04:05 by esylva            #+#    #+#             */
/*   Updated: 2022/04/25 19:48:47 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
#include <string>


class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(const std::string &name);
		ClapTrap(const ClapTrap &cpy);
		virtual ~ClapTrap();
		ClapTrap &operator =(const ClapTrap &cpy);

		virtual	void 		attack(const std::string &target);
		void 				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);

		virtual	std::string	getName(void) const;
		int					getHitPoints(void) const;
		int					getEnergyPoints(void) const;
		int					getAtackDamage(void) const;

		virtual	void		setName(std::string); 
		void				setHitPoints(int hp);
		void				setEnergyPoints(int energy);
		void				setAtackDamage(int atack);

	protected:
		std::string		_name;
		unsigned int	_hp;
		unsigned int	_energy;
		unsigned int	_damage;
};
	std::ostream&	operator<<(std::ostream& o, const ClapTrap& clap_trap);

#endif
