/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 23:17:26 by esylva            #+#    #+#             */
/*   Updated: 2022/04/27 09:34:25 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat {

	private:

		const	std::string	_name;
		int					_grade;

	public:

		Bureaucrat();
		Bureaucrat(const std::string  name);
		Bureaucrat(const std::string  name, int grade);
		Bureaucrat(const Bureaucrat& copy);
		~Bureaucrat();
		
		Bureaucrat &operator=(const Bureaucrat &obj);

		std::string	getName(void) const;
		int  		getGrade(void) const;
		void 		setGrade(int grade);
		void 		incrementGrade(void);
		void 		decrementGrade(void);
//added new function		
		void		signForm(Form &form); 
// "explicit" prohibits implicit type conversion 
// saved as example

		class GradeTooLowException: public std::exception {
			public:
				explicit GradeTooLowException() {}
	
				virtual const char* what() const throw()
				{
					return "Grade is too low!";
				}
		};
// other example
// funcion in cpp-file
		class GradeTooHighException: public std::exception {

			virtual const char* what(void) const throw();
		};
};
	std::ostream&	operator<<(std::ostream& o, const Bureaucrat& bureaucrat);

#endif
