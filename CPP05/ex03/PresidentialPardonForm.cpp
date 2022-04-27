#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
_target("nemo")
{
    std::cout << "Please, create PresForm with string some \"target\"" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Pres_Form destroy" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):
Form("Presid_form", 25, 5),
_target(target),
_sign(25),
_exec(5)
{
    std::cout << "Pres_form on line (created)" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
{
    *this = src;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
    this->_exec = src.getExGrade();
    this->_sign = src.getReqGrade();
    this->_target = src.getTarget();
    return (*this);
}

std::string PresidentialPardonForm::getTarget() const
{
    return this->_target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    try
	{
        executor.executeForm(*this);
		if (executor.getGrade() > this->getExGrade())
			throw Form::GradeTooLowException();
        std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox 🗽" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
