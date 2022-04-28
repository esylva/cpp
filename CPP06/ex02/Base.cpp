/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 14:07:34 by esylva            #+#    #+#             */
/*   Updated: 2022/04/28 15:08:41 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #ifndef BASE_HPP
// # define BASE_HPP
#include <iostream>
#include <ctime>
#include <cstdlib>

class ClassA;
class ClassB;
class ClassC;

class Base {

	public:

		virtual	~Base(){}

		Base*	generate(void) {
    		std::srand(std::time(NULL));
            std::cout << "Randomly created ";
    		int chance = std::rand();
    		switch (chance % 3) {
                case 0:{
                    Base* cA = new ClassA;
                    std::cout << cA << std::endl;
                    return cA;
                }
                case 1: {
                    Base* cB = new ClassB;
                    std::cout << cB << std::endl;
                    return cB;
                }
                case 2: {
                    Base* cC = new ClassC;
                    std::cout << cA << std::endl;
                    return cC;
                }
        	}
        }
        
        void identify(Base* p);

        void identify(Base& p){
            std::cout.operator<<p;
        }
};

std::ostream&	operator<<(std::ostream& o, const Base& form) {
		
	o << "This is " << form->name << std::endl;
	return o;
}

// #endif