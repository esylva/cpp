/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 06:32:45 by esylva            #+#    #+#             */
/*   Updated: 2022/04/21 12:42:30 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

	Harl::Harl(){
	}

	Harl::~Harl(){
	}

	void Harl::debug(void){
		std::cout << "[ DEBUG ]" << std::endl;
		std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-" <<
		"special-ketchup burger. I really do!" << std::endl;
	}

	void Harl::info(void){
		std::cout << "[ INFO ]" << std::endl;
		std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put " <<
			"enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	}

	void Harl::warning(void){
		std::cout << "[ WARNING ]" << std::endl;
		std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for " <<
			"years whereas you started working here since last month." << std::endl;
	}

	void Harl::error(void){
		std::cout << "[ ERROR ]" << std::endl;
		std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	}


	void Harl::complain( std::string level ){

		void (Harl::*ft_ptr[4])(void) =
		{
			&Harl::debug,
			&Harl::info,
			&Harl::warning,
			&Harl::error
		};
		
		std::string	levels[4] =
		{
			"DEBUG",
			"INFO",
			"WARNING",
			"ERROR",
		};

		
		int i = 0;
		while( (levels[i] != level && i <= 4)){
			i++;
		}
		switch (i)
		{
			case 0: 
				(this->*ft_ptr[i])();
				break;

			case 1:
				(this->*ft_ptr[i])();
				break;
			case 2:
				(this->*ft_ptr[i])();
				break;
			case 3:
				(this->*ft_ptr[i])();
				break;
			default:
				std::cout << "[ RTFM! ]" << std::endl;
		}
	}
