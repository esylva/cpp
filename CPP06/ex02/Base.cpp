/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 14:07:34 by esylva            #+#    #+#             */
/*   Updated: 2022/04/28 14:18:21 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Base {

	public:

		virtual	Base::~Base(){}

		Base*	Base::generate(void) {
    		std::srand(std::time(NULL));
    		int chance = std::rand();
    		switch (chance % 3) {
                case 0:{
                    Base * cA = new ClassA;
                }
                case 1: {

                }
                case 2: {

                }
        	}

		}
};