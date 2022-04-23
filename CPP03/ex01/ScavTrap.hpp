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

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &cpy);
	~ScavTrap();

	void attack(const std::string &target) const;
	void guardGate() const;
private:
	ScavTrap();
};

