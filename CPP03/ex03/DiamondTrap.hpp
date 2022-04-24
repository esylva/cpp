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
	DiamondTrap(const std::string &_name);
	explicit DiamondTrap(const DiamondTrap &cpy);
	~DiamondTrap();

	void whoAmI() const;

private:
	std::string name;

	DiamondTrap();
};

