/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 11:04:21 by esylva            #+#    #+#             */
/*   Updated: 2022/04/24 11:04:21 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class DiamondTrap : public ScavTrap, public FragTrap
{
public:
	DiamondTrap();
	DiamondTrap(const std::string &_name);
	DiamondTrap(const DiamondTrap &cpy);
	~DiamondTrap();

	void			setName(std::string name);
	std::string		getName(void) const;
	void			attack(const std::string& target);
	
	void			whoAmI() const;

private:
	std::string _name;

};

