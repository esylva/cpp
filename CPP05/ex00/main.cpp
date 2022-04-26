/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:56:23 by esylva            #+#    #+#             */
/*   Updated: 2022/04/26 13:23:29 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) 
{
	std::cout << "----------------Three types of constructors on stack----------------" << std::endl;

	Bureaucrat b1;
	Bureaucrat b2 ("Vovka");
	Bureaucrat b3 ("Semion Semionovich", 13);

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << b3 << std::endl;

	std::cout << "----------------Three types of constructors on heap----------------" << std::endl;

	Bureaucrat *h1 = new Bureaucrat;
	Bureaucrat *h2 = new Bureaucrat ("Seryi");
	Bureaucrat *h3 = new Bureaucrat ("Vovan Sidorovich", 7);

	std::cout << *h1 << std::endl;
	std::cout << *h2 << std::endl;
	std::cout << *h3 << std::endl;
	delete h1;
	delete h2;

	std::cout << "-------------------COPY ------------------" << std::endl;

	Bureaucrat b3_copy = Bureaucrat(b3);
	Bureaucrat *h3_copy = new Bureaucrat(*h3);
	
	std::cout << b3_copy << std::endl;
	std::cout << *h3_copy << std::endl;
	delete h3;
	std::cout << *h3_copy << std::endl;
	delete h3_copy;

	std::cout << "------------HIGHER AND LOWER GRADES-----------" << std::endl;
	Bureaucrat a3("Alex", 0);
	Bureaucrat a2("Annushka", 151);

	std::cout << "------------INCREMENT AND DECREMENT-----------" << std::endl;

	Bureaucrat a1("Oleg", 1);

	std::cout << "Incrementing" << std::endl;
	a1.incrementGrade();
	std::cout << a1 << std::endl;

	std::cout << "Incrementing" << std::endl;
	a2.incrementGrade();
	std::cout << a2 << std::endl << std::endl;
	std::cout << "Decrementing" << std::endl;
	a2.decrementGrade();
	std::cout << a2 << std::endl;
	std::cout << "Decrementing" << std::endl;
	a2.decrementGrade();
	std::cout << a2 << std::endl << std::endl;
	
	return (0);
}
