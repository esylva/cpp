#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():
_target("nemo")
{
    std::cout << "Please, create shrubb with string some \"target\"" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Sh destroy" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
Form("Shrubb", 145, 137),
_target(target),
_sign(145),
_exec(137)
{
    std::cout << "Shrub on line (created)" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
{
    *this = src;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
    this->_exec = src.getExGrade();
    this->_sign = src.getReqGrade();
    this->_target = src.getTarget();
    return (*this);
}

std::string ShrubberyCreationForm::getTarget() const
{
    return this->_target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    try
	{
        executor.executeForm(*this);
		if (executor.getGrade() > this->getExGrade())
			throw Form::GradeTooLowException();
            std::string asci = \
"######################################################\n\
######################## ### ###### ### #### ####    ##\n\
####################### # ##### #######  ##  ### #######\n\
#####################  ##  ############ #  # ### #########\n\
###################  ## ###  ##### #### #### ### ###  ##\n\
################# # ### ## ## ## ###### #### ### #### #####\n\
###############  ### # #### ## ######## #### ####    ####\n\
##############  ### ## #### ###  #######################\n\
#############  #### ### #### #### ### ###################\n\
############ # ### ##### #### #### ######    ###### #########\n\
############ ## # ## #### #### ## # ##### ### #### # ####\n\
########### #### #### ### ### #### # #### ## #### ### ##\n\
########### # ### #### # ##### ####  ####  ######     #####\n\
########### ## ## #### ### # ### # ## ### ## #### ### ####\n\
########### ### ### ### #### #### ##  ### ### ### ### ######\n\
############ ### ## # ## ### #### # # #################\n\
############# # #### #### ### #### ## ### ################\n\
############## ###### #### ### ## ## ########  ###     ##\n\
############### ## ### # ##### # ### ####### ##### ######\n\
################# #####  #####  #### ###### ######   #####\n\
################## #####  #### #### ## #### ###### #####\n\
###################  ####  ### ##  ######### ##### ##########\n\
#####################   #   #    ############  ###     ###\n\
######################        ##### #######################\n\
#######################      ## ####### #################\n\
########################    ###### #######################\n\
########################    ######### #######     ####  ##\n\
########################    ################# ####### ## ##\n\
########################    #################   #### #### ##\n\
########################    ############ #### ###### #### #\n\
########################     ################ ####### ## ###\n\
######################         ############## ########  ##\n\
#################### # ### ###   ########################\n\
################### ### # # ### # #################\n\
#############################################\n";

        std::ofstream ofs;
        std::string name_file;

        name_file = this->getTarget() + "_shrubbery";
        char arr[name_file.length() + 1];

        for (unsigned long x = 0; x < sizeof(arr); x++)
            arr[x] = name_file[x];
        ofs.open(arr);
        if (!ofs.is_open())
        {
            std::cout << "Error! File " << name_file << " was not created" << std::endl;
            return ;
        }
        ofs << asci;
        ofs.close();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}