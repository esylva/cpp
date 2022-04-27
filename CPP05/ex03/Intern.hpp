#ifndef __INTERN_HPP__
# define __INTERN_HPP__

# include <iostream>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:

		Intern();
		~Intern();
		Intern(const Intern &src);
		Intern & operator=(const Intern &src);

		Form* makeForm(std::string form, std::string target);
};

#endif
