/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 10:04:57 by esylva            #+#    #+#             */
/*   Updated: 2022/04/28 10:15:23 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): 
	Form("Shrubbery Creation Form", _inGradeToSign, _inGradeToExecute), _target(target) {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << this->getName() << " destroyed" << std::endl;
}


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy):Form() {
	*this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj) {
 	if (this != &obj) {
		this->_target = obj.getTarget();
	}
	return (*this);
}

std::string ShrubberyCreationForm::getTarget() const {
	return this->_target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (!getSignedStatus()) {
		throw Form::NotSignedFormException();
	}
	if (executor.getGrade() > this->getGradeToExecute()) {
		throw Form::GradeTooLowException();
	}
	std::string asci = \
"######################################################\n\
######################## ### ###### ##### ##### #### ##\n\
####################### # ##### ######## # ####  ### ##\n\
#####################  ##  ############ ### ### # ## ###\n\
###################  ## ###  ##### ####     ### ## # ###\n\
################# # ### ## ## ## ###### ### ### ###  ###\n\
###############  ### # #### ## ######## ### ### #### ###\n\
##############  ### ## #### ###  #######################\n\
#############  #### ### #### #### ### ##################\n\
############ # ### ##### #### #### #######   ##### #####\n\
############ ## # ## #### #### ## # ##### ### #### ######\n\
########### #### #### ### ### #### # #### ### #### ######\n\
########### # ### #### # ##### ####  #### ### #### ######\n\
########### ## ## #### ### # ### # ## ### ### #### ### ##\n\
########### ### ### ### #### #### ##  ####   #####     ##\n\
############ ### ## # ## ### #### # # ###################\n\
############# # #### #### ### #### ## ### ###############\n\
############## ###### #### ### ## ## ######   ### #### ##\n\
############### ## ### # ##### # ### ####### #### ### ###\n\
################# #####  #####  #### ####### #### ## ####\n\
################## #####  #### #### ## ##### #### # #####\n\
###################  ####  ### ##  ######### ####  ######\n\
#####################   #   #    ##########   ### #######\n\
######################        ##### ######################\n\
#######################      ## ####### #################\n\
########################    ###### #######################\n\
########################    ######### #######     ###   ##\n\
########################    ################# ######## ###\n\
########################    #################   ###### ###\n\
########################    ############ #### ######## ###\n\
########################     ################ ######## ###\n\
######################         ##############     ###   ##\n\
#################### # ### ###   #########################\n\
################### ### # # ### # ########################\n\
##########################################################\n";

	std::string fileName = this->getTarget() + "_shrubbery";
	// const std::string fileName = this->getTarget() + "_shrubbery";

	std::ofstream ofs;
	// std::ofstream ofs(fileName);
	// std::string fileName;

	// fileName = this->getTarget() + "_shrubbery";
	char arr[fileName.length() + 1];

	for (unsigned long x = 0; x < sizeof(arr); x++)
	arr[x] = fileName[x];
	// ofs.open(arr);
	// if (!ofs.is_open())
	// {
	// 	std::cout << "Error! File " << fileName << " was not created" << std::endl;
	// 	return ;
	// }
	try {
		ofs.open(arr);

		// ofs.open(fileName);
		// ofs.open();
		ofs << asci;
		ofs.close();	
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}


	std::cout << executor << std::endl;
}
