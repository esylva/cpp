#ifndef __FORM_HPP__
# define __FORM_HPP__

class Form;

# include <iostream>
# include "Bureaucrat.hpp"

class Form
{
	public:

		Form();
		virtual ~Form();
		Form(std::string name, int req_grade, int ex_grade);
		Form(const Form &src);
		Form & operator=(const Form &src);

		int				getReqGrade() const;
		std::string		getName() const;
		bool			getSigned() const;
		int				getExGrade() const;
		void			beSigned(Bureaucrat &src);
		virtual std::string	getTarget() const = 0;
		virtual void        execute(Bureaucrat const & executor) const = 0;

		class GradeTooHighException: public std::exception
		{
			public:
					explicit GradeTooHighException()
					{}
			
					virtual const char* what() const throw()
					{
						return "\033[1;5;7;33m Too high req_grade!  Delete this form!\033[0m";
					}
		};

		class GradeTooLowException: public std::exception
		{
			public:
					explicit GradeTooLowException()
					{}
			
					virtual const char* what() const throw()
					{
						return "\033[1;5;7;32m Too low req_grade!  try again!!  \033[0m";
					}
		};

	private:

		const int			_req_grade;
		const std::string	_name;
		bool				_signed;
		bool				_bad_form;
		const int			_ex_grade;

};

std::ostream& operator<<(std::ostream &o, const Form &src);

#endif
