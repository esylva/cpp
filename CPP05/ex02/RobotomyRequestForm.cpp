/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 10:04:57 by esylva            #+#    #+#             */
/*   Updated: 2022/04/28 11:47:45 by esylva           ###   ########.fr       */
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
	if (!getSignedStatus()) {
		throw Form::NotSignedFormException();
	}
	if (executor.getGrade() > this->getGradeToExecute()) {
		throw Form::GradeTooLowException();
	}
	std::srand(std::time(NULL));
	int chance = std::rand();
	if (chance % 2) {
		std::cout << this->getTarget() << " has been robotomized successfully 🤖" << std::endl;
	}
	else {
		std::cout << "Robotomization fail" << std::endl;
	}
	std::cout << executor << " exetute the " << getName() << std::endl;
}
