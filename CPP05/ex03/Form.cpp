#include "Form.hpp"

Form::Form(): _req_grade(1), _name("noname_form"), _signed(false), _ex_grade(1)
{
	std::cout << "noname_form with req_grade 1 added" << std::endl;
}

Form::~Form()
{
	std::cout << "form to trash" << std::endl;
}

Form::Form(std::string const name, int req_grade, int ex_grade):
_req_grade(req_grade),
_name(name),
_signed(false),
_ex_grade(ex_grade)
{
	try
	{
		if (req_grade < 1 || ex_grade < 1)
		    throw Form::GradeTooHighException();
		else if (req_grade > 150 || ex_grade > 150)
			throw Form::GradeTooLowException();
		this->_bad_form = false;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
		this->_bad_form = true;
	}
	if (this->_bad_form)
		std::cout << "bad form ";
	else
		std::cout << " form ";
	std::cout << name << " created with req_grade = " << this->_req_grade
		<< std::endl;
}

int	Form::getReqGrade() const
{
	return (this->_req_grade);
}

int	Form::getExGrade() const
{
	return (this->_ex_grade);
}

std::string	Form::getName() const
{
	return (this->_name);
}

bool Form::getSigned() const
{
	return (this->_signed);
}

std::ostream & operator<<(std::ostream &o, Form const &src)
{
	o << "\033[1;35m" << src.getName() << "\033[0m"
	<< " Form with req_grade = " << src.getReqGrade()
	<< ". is_signed = " << src.getSigned();
	return o;
}

Form::Form(Form const &src):
_req_grade(src.getReqGrade()),
_name(src.getName()),
_signed(src.getSigned()),
_ex_grade(src.getExGrade())
{
	*this = src;
}

Form &Form::operator=(const Form &src)
{
	int &ii = const_cast<int &>(this->_req_grade);
	ii = src.getReqGrade();
	const int &iii = const_cast<const int&>(ii);
	(void)iii;
	std::string &nn = const_cast<std::string&>(this->_name);
	nn = src.getName();
	const std::string& nnn = const_cast<const std::string&>(nn);
	(void)nnn;
	this->_signed = src.getSigned();
	int &ee = const_cast<int &>(this->_ex_grade);
	ii = src.getExGrade();
	const int &eee = const_cast<const int&>(ee);
	(void)eee;
	return (*this);
}

void		Form::beSigned(Bureaucrat &src)
{
	try
	{
		if (src.getGrade() > this->getReqGrade())
			throw Form::GradeTooLowException();
		this->_signed = true;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	src.signForm(*this);
}
