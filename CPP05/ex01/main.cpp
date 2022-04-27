/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:56:23 by esylva            #+#    #+#             */
/*   Updated: 2022/04/27 10:00:24 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) 
{

	std::cout << "---------CREATE BUREAUCRATS AND FORMS---------" << std::endl;

	Bureaucrat	b1;
	Bureaucrat	b2("Medved", 17);
	Form		form_16("Form N16", 16, 16);
	Form		form_149("Form N149", 149, 149);
	Form		*form_086Y = new Form("086Y", 8, 6);

	std::cout << "------------------DEEP COPY-------------------" << std::endl;

	Form		*form_086Y_copy = new Form(*form_086Y);
	delete form_086Y;
	std::cout << *form_086Y_copy << std::endl;
	delete form_086Y_copy;

	std::cout << "----------HIGHEST AND LOWEST GRADES-----------" << std::endl;

	try {
		Form form_151_1("151_1", 151, 1);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		Form form_150_0("150_0", 150, 0);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "-------------------SIGNING--------------------" << std::endl;

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;

	try {
		std::cout << "Trying to sign Form N149 by " << b1.getName() << std::endl;
		form_149.beSigned(b1);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << "Trying to sign Form N149 by " << b2.getName() << std::endl;
		form_149.beSigned(b2);
		std::cout << "Success!" << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << b2.getName() << " trying to sign the Form N16" << std::endl;
	b2.signForm(form_16);
	
	std::cout << "Incrementing "<< b2.getName() << " grade" << std::endl;
	b2.incrementGrade();
	std::cout << b2 << std::endl;

	std::cout << b2.getName() << " trying again to sign the Form N16" << std::endl;
	b2.signForm(form_16);
	
	std::cout << form_16 << std::endl << std::endl;

	return (0);
}