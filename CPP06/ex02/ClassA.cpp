/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 14:36:18 by esylva            #+#    #+#             */
/*   Updated: 2022/04/28 15:06:52 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #ifndef CLASSA_HPP
// # define CLASSA_HPP
// # include "Base.hpp"
#include <iostream>

class ClassA: public Base {

	public:
        const std::string name = "Class A";
        
        ClassA(){
            std::cout << "Ok, "<< name << " constructed" << std::endl;
        }
        virtual	~ClassA(){}

};


std::ostream&	operator<<(std::ostream& o, const ClassA& form) {
		
	o << "This is " << form.name << std::endl;
	return o;
}

// #endif