/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 23:17:26 by esylva            #+#    #+#             */
/*   Updated: 2022/04/27 09:36:07 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("NPC"), _grade(150) {
	std::cout << "Bureaucrat: " << getName() << " Grade: " << getGrade() << " created" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string  name): _name(name), _grade(150) {
	std::cout << "Bureaucrat: " << getName() << " Grade: " << getGrade() << " created" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string  name, int grade): _name(name) {
	try {
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		this->_grade = grade;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
		this->_grade = 150;
	}
	std::cout << "Bureaucrat: " << getName() << " Grade: " << getGrade() << " created" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy){
	*this = copy;
	std::cout << "Bureaucrat: " << getName() << " Grade: " << getGrade() << " copied" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat " << getName() << " destructed" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &obj) {
	if (this != &obj)
		this->_grade = obj.getGrade();
	return (*this);
}

//getters & setters
std::string	Bureaucrat::getName(void) const {
	return _name;
}

int  		Bureaucrat::getGrade(void) const {
	return _grade;
}

void 		Bureaucrat::setGrade(int grade) {
	this->_grade = grade;
}

//increment & decrement
void	Bureaucrat::incrementGrade(void) {
	try {
		if (this->_grade > 1)
			this->_grade--;
		else
			throw Bureaucrat::GradeTooHighException();
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
		this->_grade = 1;
	}
}

void	Bureaucrat::decrementGrade(void) {
	try {
		if (this->_grade < 150)
			this->_grade++;
		else
			throw Bureaucrat::GradeTooLowException();
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
		this->_grade = 150;
	}
}

void	Bureaucrat::signForm(Form &form){
	form.beSigned(*this);	
} 


// ohter example of exception from hpp-file
		const char* Bureaucrat::GradeTooHighException::what(void) const throw(){
			return ("Grade is too high!");
		}
		
// external functions
	std::ostream&	operator<<(std::ostream& o, const Bureaucrat& bureaucrat) {
		o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
		return o;		
	}
