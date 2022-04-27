#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("noname"), _grade(150)
{
	std::cout << "noname with gr150 created" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "buy-buy, deathcrat" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grade):
_name(name)
{
	try
	{
		if (grade < 1)
		    throw Bureaucrat::GradeTooHighException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		this->_grade = grade;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
		this->_grade = 150;
	}
	std::cout << name << " created with grade = " << this->_grade
		<< std::endl;
}

void	Bureaucrat::incGrade(int how)
{
	std::cout << "inc try " << how << " for "
	<< this->getGrade() << std::endl;
	try
	{
		if ((this->getGrade() - how) < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade -= how;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void    Bureaucrat::decGrade(int how)
{
	std::cout << "decr try " << how << " for "
	<< this->getGrade() << std::endl;
	try
	{
		if (how + (this->getGrade()) > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			this->_grade += how;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

std::ostream & operator<<(std::ostream &o, Bureaucrat const &src)
{
	o << "\033[1;33m" << src.getName() << "\033[0m"
	<< " bureaucrat grade " << src.getGrade();
	return o;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	*this = src;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	std::string &nn = const_cast<std::string&>(this->_name);
	nn = src.getName();
	const std::string& nnn = const_cast<const std::string&>(nn);
	(void)nnn;
	this->_grade = src.getGrade();
	return (*this);
}

void		Bureaucrat::signForm(Form &src)
{
	if (src.getSigned())
		std::cout << "\033[1;31m" << this->getName() << "\033[0m"
			<< " sign ☑ " << src.getName() << std::endl;
	else
		std::cout << "\033[1;31m" << this->getName() << "\033[0m"
			<< " cannot sign ❌  becouse its grade=" << this->getGrade()
			<< " is not higher than "
			<< src.getName() << "'s req_grade= " << src.getReqGrade()
			<< std::endl;
}

void	Bureaucrat::executeForm(Form const & form) const
{
	if (form.getSigned() == 0 || form.getExGrade() < this->_grade)
		std::cout << "bureaucrat " << "\033[1;31m" << this->getName() << "\033[0m"
			<< " cannot execute " << form.getName() << " for target=" << form.getTarget()
			<< std::endl;
	else
	{
		std::cout << "bureaucrat " << "\033[1;31m" << this->getName() << "\033[0m"
			<< " exec " << form.getName() << std::endl;
	}
}