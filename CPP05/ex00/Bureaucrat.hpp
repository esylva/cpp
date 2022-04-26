/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 23:17:26 by esylva            #+#    #+#             */
/*   Updated: 2022/04/25 23:17:26 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

class Bureaucrat {

private:
std::string const	_name;
		int			_grade;
        class GradeTooLowException {

		};
		class GradeTooHighException {

		};

	public:

		Bureaucrat();
		Bureaucrat(std::string const name);
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(const Bureaucrat& copy);

		Animal &operator=(const Animal &obj);

		std::string const getName(void);
		int const getGrade(void);
		void setName(std::string const name);
		void setGrade(int grade);
		void incrementGrade(int grade);
		void decrementGrade(int grade);

};
	std::ostream&	operator<<(std::ostream& o, const Bureaucrat& bureaucrat);


#endif

// And a grade that ranges from 1 (highest possible grade) to 150 (lowest possible
// grade).
// Any attempt to instantiate a Bureaucrat using an invalid grade must throw an ex-
// ception:
// // either a Bureaucrat::GradeTooHighException or a Bureaucrat::GradeTooLowException.
// You will provide getters for both these attributes: getName() and getGrade(). 
// Implement also two member functions to increment or decrement the bureaucrat grade. If
// the grade is out of range, both of them will throw the same exceptions as the constructor.
// You will implement an overload of the insertion («) operator to print something like
// (without the angle brackets):
// <name>, bureaucrat grade <grade>.