/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:56:23 by esylva            #+#    #+#             */
/*   Updated: 2022/04/28 11:48:27 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) 
{

	std::cout << "---------CREATE BUREAUCRATS AND FORMS---------" << std::endl;

	Bureaucrat	b1("Volk", 140);
	Bureaucrat	b2("Medved", 17);
	Bureaucrat	*b3 = new Bureaucrat("Tigr", 1);
	ShrubberyCreationForm SCF ("Slon");
	RobotomyRequestForm  RRF ("Aist");
	PresidentialPardonForm	PPF ("Vyhuhol");
	std::cout <<std::endl;
	
	std::cout << "---------ShrubberyCreationForm---------" << std::endl;
	b1.signForm(SCF);
	try {
		SCF.execute(b1);
	}
	catch (std::exception & e) {
		std::cout << e.what() << " Can't execute." << std::endl;
	}	
	SCF.execute(b2);
	std::cout << std::endl << "---------RobotomyRequestForm---------" << std::endl;

	try {
		SCF.beSigned(b1);
	}
	catch (std::exception & e) {
		std::cout << e.what() << " Can't sign." << std::endl;
	}
	b2.executeForm(RRF);
	b2.signForm(RRF);
	RRF.execute(b2);
	std::cout << std::endl << "---------PresidentialPardonForm---------" << std::endl;

	b2.signForm(PPF);
	b2.executeForm(PPF);
	b3->executeForm(PPF);

	std::cout <<std::endl;
	delete b3;
	return (0);
}
