/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 11:04:21 by esylva            #+#    #+#             */
/*   Updated: 2022/04/25 20:02:26 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ScavTrap.hpp"
# include "FragTrap.hpp"


class DiamondTrap : public FragTrap, public ScavTrap
{
public:
	DiamondTrap();
	DiamondTrap(const std::string &_name);
	DiamondTrap(const DiamondTrap &cpy);
	~DiamondTrap();
	DiamondTrap&	operator=(const DiamondTrap &obj);

	void			setName(std::string name);
	std::string		getName(void) const;
	void			attack(const std::string& target);
	void			whoAmI() const;

private:
	std::string _name;

};

#endif
