/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:26:16 by esylva            #+#    #+#             */
/*   Updated: 2022/04/26 15:54:35 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	private:
		Form();

		const	std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;
		void				_checkGrades(void);
		
	public:

		Form(const std::string  name, const int gradeToSign, const int gradeToExecute);
		Form(const Form& copy);
		~Form();
		
		Form &operator=(const Form &obj);

		std::string	getName(void) const;
		bool		getSignedStatus(void) const;
		int  		getGradeToSign(void) const;
		int  		getGradeToExecute(void) const;
		void 		beSigned(Bureaucrat& bureaucrat);


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
	std::ostream&	operator<<(std::ostream& o, const Form& Form);

#endif


