/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:26:16 by esylva            #+#    #+#             */
/*   Updated: 2022/04/27 08:56:33 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

Form::Form(): _name("defaultForm"), _signed(false), _gradeToSign(150), _gradeToExecute(150) {
	std::cout << "Defaulf form created" << std::endl; 
}

Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute):
	_name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {

	_checkGrades();
	
	std::cout << "Form \"" << getName() << "\" created. Sign grade - " <<
	getGradeToSign() << " Execute grade - " << getGradeToExecute() << std:: endl;
}

Form::Form(const Form& copy): _name(copy.getName()), _signed(copy.getSignedStatus()), 
	_gradeToSign(copy.getGradeToSign()), _gradeToExecute(copy.getGradeToExecute()) {

		_checkGrades();

		std::cerr << "The form copied" << std::endl;
}

Form::~Form() {
	std::cout << "Form \"" << getName() << "\" destroyed" << std::endl; 
}

Form& Form::operator=(const Form &obj){
	if (this != &obj) {
		this->_signed = obj.getSignedStatus();
	}
	return (*this);
}

std::string	Form::getName(void) const{
	return (this->_name);
}

bool		Form::getSignedStatus(void) const{
	return (this->_signed);
}

int  		Form::getGradeToSign(void) const {
	return (this->_gradeToSign);
}

int  		Form::getGradeToExecute(void) const {
	return (this->_gradeToExecute);
}
void 		Form::beSigned(Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() > this->getGradeToSign()) {
		
		throw Form::GradeTooLowException();
	}
	_signed = true;
}

void	Form::_checkGrades(void){
	if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
		throw Form::GradeTooHighException();
	if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what(void) const throw() {
	return ("Grade is too high!");
}

std::ostream&	operator<<(std::ostream& o, const Form& form) {
	
	std::string	isSigned;

	if (form.getSignedStatus() == false)
		isSigned = "\" is not signed";
	else
		isSigned = "\" is signed";
		
	o << "Form \"" << form.getName() << isSigned << 
	", the grade required to sign is " << form.getGradeToSign() << 
	", the grade required to execute is " << form.getGradeToExecute();
	return o;
}
