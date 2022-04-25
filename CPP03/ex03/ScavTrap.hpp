/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 23:58:35 by esylva            #+#    #+#             */
/*   Updated: 2022/04/25 19:57:49 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &cpy);
	virtual ~ScavTrap();
	ScavTrap &operator =(const ScavTrap &cpy);

	void guardGate() ;
	virtual	void attack(const std::string &target);

protected:
	static const int _initHP = 100;
	static const int _initEP = 50;
	static const int _initAD = 20;

};
#endif
