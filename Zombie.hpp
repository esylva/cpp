/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:47:08 by esylva            #+#    #+#             */
/*   Updated: 2022/04/15 15:52:45 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie
{
	private:
		std::string	_name;
		
	public:
		Zombie();
		Zombie(std::string name);
		Zombie(int N, std::string name);
		~Zombie();

		std::string get_name(void) const;
		void		set_name(std::string name);
		void		announce(void);
};
	Zombie*	newZombie(std::string name);
	void	randomChump(std::string name);
	Zombie* zombieHorde(int N, std::string name);

#endif
