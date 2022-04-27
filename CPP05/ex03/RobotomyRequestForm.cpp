#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():
_target("nemo")
{
    std::cout << "Please, create Robo_form with string some \"target\"" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Robo_form destroy" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):
Form("Robo", 72, 45),
_target(target),
_sign(72),
_exec(45)
{
    std::cout << "Robo_form on line (created)" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
{
    *this = src;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
    this->_exec = src.getExGrade();
    this->_sign = src.getReqGrade();
    this->_target = src.getTarget();
    return (*this);
}

std::string RobotomyRequestForm::getTarget() const
{
    return this->_target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    try
	{
        executor.executeForm(*this);
		if (executor.getGrade() > this->getExGrade())
			throw Form::GradeTooLowException();
        std::cout << "dzin - dzinnnn 🔔🔔🔔\a\a" << std::endl;
        std :: srand ( std :: time (NULL ) ) ;
    	int heads_or_tails = std::rand( );
        switch (heads_or_tails % 2) {
        case 0:
            std::cout << this->getTarget() << " has been robotomized successfully 🤖" << std::endl;
            break;
        case 1:
            std::cout << this->getTarget() << " robotomization fail ⚒" << std::endl;
            break;
        default:
            std::cout << "rebro" << std::endl;
            break;
    }
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
