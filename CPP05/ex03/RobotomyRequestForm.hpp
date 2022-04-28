/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 10:04:57 by esylva            #+#    #+#             */
/*   Updated: 2022/04/28 11:32:42 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"
# include <cstdlib>
# include <ctime>

class RobotomyRequestForm: public Form
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		virtual ~RobotomyRequestForm();

		RobotomyRequestForm & operator=(const RobotomyRequestForm &obj);

		virtual void			execute(Bureaucrat const & executor) const;
		virtual	std::string		getTarget() const;

	private:
		std::string			_target;
		static const int	_inGradeToSign		= 72;
		static const int	_inGradeToExecute	= 45;

};

#endif