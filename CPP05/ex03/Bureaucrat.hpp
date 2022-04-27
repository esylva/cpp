#ifndef __BUREAUCRAT_HPP__
# define __BUREAUCRAT_HPP__

class Bureaucrat;
# include <iostream>
# include "Form.hpp"

class Bureaucrat
{
	public:
                Bureaucrat();
                ~Bureaucrat();
                Bureaucrat(Bureaucrat const &src);
		Bureaucrat(std::string name, int grade);
		Bureaucrat & operator=(Bureaucrat const &src);

		std::string	getName() const;
		int			getGrade() const;
		void		incGrade(int how);
		void		decGrade(int how);
		void		signForm(Form &src);
		void		executeForm(Form const & form) const;

		class GradeTooHighException: public std::exception
		{
			public:
					explicit GradeTooHighException()
					{}
			
					virtual const char* what() const throw()
					{
						return "\033[1;5;7;35m Too high grade! \033[0m";
					}
		};

		class GradeTooLowException: public std::exception
		{
			public:
					explicit GradeTooLowException()
					{}
			
					virtual const char* what() const throw()
					{
						return "\033[1;5;7;34m Too low grade!  \033[0m";
					}
		};

	private:
		std::string const	_name;
		int			_grade;
};

std::ostream& operator<<(std::ostream &o, const Bureaucrat &src);

#endif
