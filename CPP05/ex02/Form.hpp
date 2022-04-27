/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:26:16 by esylva            #+#    #+#             */
/*   Updated: 2022/04/27 16:25:39 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	private:

		const	std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;
		void				_checkGrades(void);
		// const	std::string	_target;

	public:

		Form();
		Form(const std::string  name, const int gradeToSign, const int gradeToExecute);
		Form(const Form& copy);
		virtual ~Form();
		
		Form &operator=(const Form &obj);

		std::string	getName(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExecute(void) const;
		void		beSigned(Bureaucrat& bureaucrat);
		bool		getSignedStatus(void) const;
		
		// virtual void	execute(Bureaucrat const & executor) const;
		// std::string	getTarget() const;

		virtual std::string	getTarget() const;
		virtual void        execute(Bureaucrat const & executor) const;

	protected:

		class GradeTooLowException : public std::exception
		{
			virtual const char* what(void) const throw();
		};

		class GradeTooHighException: public std::exception {

			virtual const char* what(void) const throw();
		};
};
	std::ostream&	operator<<(std::ostream& o, const Form& Form);

#endif


