/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 10:04:57 by esylva            #+#    #+#             */
/*   Updated: 2022/04/28 08:22:36 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): 
	Form("Robotomy Request Form", _inGradeToSign, _inGradeToExecute), _target(target) {
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << this->getName() << " destroyed" << std::endl;
}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy):Form() {
	*this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj) {
 	if (this != &obj) {
		this->_target = obj.getTarget();
	}
	return (*this);
}

std::string RobotomyRequestForm::getTarget() const {
	return this->_target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	// try
	// {
	// 	executor.executeForm(*this);
	// 	if (executor.getGrade() > this->getExGrade())
	// 		throw Form::GradeTooLowException();
    //     std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
	// }
	// catch (std::exception & e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	std::cout << executor << std::endl;
}
