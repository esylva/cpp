/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 10:45:23 by esylva            #+#    #+#             */
/*   Updated: 2022/04/24 10:45:23 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap();
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &cpy);
	virtual ~FragTrap();
	FragTrap &operator =(const FragTrap &cpy);

	void highFivesGuys(void);
	void attack(const std::string &target);

protected:
	static int _initHP;
	static int _initEP;
	static int _initAD; 
};

