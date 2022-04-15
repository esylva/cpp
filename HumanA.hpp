/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:47:08 by esylva            #+#    #+#             */
/*   Updated: 2022/04/15 21:49:14 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA
{
	private:
		std::string	_name;
		Weapon		type;
		
	public:
		HumanA();
		HumanA(std::string name);
		HumanA(int N, std::string name);
		~HumanA();

		std::string get_name(void) const;
		void		set_name(std::string name);
		void		announce(void);
};
	HumanA*	newHumanA(std::string name);
	void	randomChump(std::string name);
	HumanA* HumanAHorde(int N, std::string name);

#endif
