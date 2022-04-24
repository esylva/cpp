/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 23:58:35 by esylva            #+#    #+#             */
/*   Updated: 2022/04/23 23:58:35 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

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
	static int _initHP;
	static int _initEP;
	static int _initAD;

};

