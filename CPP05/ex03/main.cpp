/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:56:23 by esylva            #+#    #+#             */
/*   Updated: 2022/04/28 12:57:15 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void) 
{

	std::cout << "---------CREATE BUREAUCRATS AND FORMS---------" << std::endl;

	Bureaucrat	b1("Volk", 140);
	Bureaucrat	b2("Medved", 17);
	Bureaucrat	*b3 = new Bureaucrat("Tigr", 1);
	Intern student;

	Form *SCF = student.makeForm("shrubbery creation", "Slon");
	Form *RRF = student.makeForm("robotomy request", "Aist");
	Form *PPF = student.makeForm("president pardon", "Vyhuhol");
	Form *FFF = student.makeForm("president request", "Kaban");
	std::cout <<std::endl;
	
	std::cout << "---------ShrubberyCreationForm---------" << std::endl;
	b1.signForm(*SCF);
	try {
		SCF->execute(b1);
	}
	catch (std::exception & e) {
		std::cout << e.what() << " Can't execute." << std::endl;
	}	
	SCF->execute(b2);
	std::cout << std::endl << "---------RobotomyRequestForm---------" << std::endl;

	try {
		SCF->beSigned(b1);
	}
	catch (std::exception & e) {
		std::cout << e.what() << " Can't sign." << std::endl;
	}
	b2.executeForm(*RRF);
	b2.signForm(*RRF);
	RRF->execute(b2);
	std::cout << std::endl << "---------PresidentialPardonForm---------" << std::endl;

	b2.signForm(*PPF);
	b2.executeForm(*PPF);
	b3->executeForm(*PPF);

	std::cout <<std::endl;
	delete b3;
	delete SCF;
	delete RRF;
	delete PPF;
	(void) FFF;

	return (0);
}

