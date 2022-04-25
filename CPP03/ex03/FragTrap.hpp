/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 10:45:23 by esylva            #+#    #+#             */
/*   Updated: 2022/04/25 20:01:14 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define  FRAGTRAP_HPP
# include "ClapTrap.hpp"

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
	// static const int _initHP = 100;
	// static const int _initEP = 100;
	// static const int _initAD = 30; 
	static int _initHP;
	static int _initEP;
	static int _initAD; 
};
#endif
