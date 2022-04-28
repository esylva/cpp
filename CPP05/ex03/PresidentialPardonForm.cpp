/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 10:04:57 by esylva            #+#    #+#             */
/*   Updated: 2022/04/28 11:49:53 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): 
	Form("Presidential Pardon Form", _inGradeToSign, _inGradeToExecute), _target(target) {
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << this->getName() << " destroyed" << std::endl;
}


PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy):Form() {
	*this = copy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj) {
 	if (this != &obj) {
		this->_target = obj.getTarget();
	}
	return (*this);
}

std::string PresidentialPardonForm::getTarget() const {
	return this->_target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (!getSignedStatus()) {
		throw Form::NotSignedFormException();
	}
	if (executor.getGrade() > this->getGradeToExecute()) {
		throw Form::GradeTooLowException();
	}
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
