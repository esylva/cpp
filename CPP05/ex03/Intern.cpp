/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:00:51 by esylva            #+#    #+#             */
/*   Updated: 2022/04/28 12:00:51 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
# include "Form.hpp"

Intern::Intern() {
	std::cout << "Intern on work" << std::endl;
}

Intern::Intern(const Intern &src) {
	*this = src;
}

Intern::~Intern() {
	std::cout << "Intern went home" << std::endl;
}


Intern & Intern::operator=(const Intern &src) {
	(void)src;
	return (*this);
}

Form* Intern::makeForm(std::string form, std::string target)
{
	std::string forms[3] = 
	{
		"shrubbery creation",
		"robotomy request", 
		"president pardon"
	};
	// const int size = (int) sizeof(forms) / sizeof(*forms);
	// int i = 0;
    // while (i < size && forms[i].compare(form) != 0) {
	int i = 0;
	while(forms[i] != form && i <=3) {
        i++;
	}
	switch (i)
	{
		case 0:
		{
			Form* scf = new ShrubberyCreationForm(target);
			std::cout << "Intern creates " << form << " for " << target << std::endl;
			return scf;
			break;
		}
		case 1:
		{
			Form* rrf = new RobotomyRequestForm(target);
			std::cout << "Intern creates " << form << " for " << target << std::endl;
			return rrf;
			break;
		}
		case 2:
		{
			Form* ppf = new PresidentialPardonForm(target);
			std::cout << "Intern creates " << form << " for " << target << std::endl;
			return ppf;
			break;
		}
		default:
		{
			std::cout << "Intern NOT creates supid " << form << " for " << target <<std::endl;
			return NULL;
		}
	}
}