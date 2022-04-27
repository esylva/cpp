#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern on work" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern get out" << std::endl;
}

Intern::Intern(const Intern &src)
{
	*this = src;
}

Intern & Intern::operator=(const Intern &src)
{
	(void)src;
	return (*this);
}

Form* Intern::makeForm(std::string form, std::string target)
{
	std::string comp[3] = {"robotomy request", "president request", "shrubbery request"};
	
	const size_t size = sizeof(comp) / sizeof(*comp);
	size_t i = 0;
    while (i < size && comp[i].compare(form) != 0)
	{
        i++;
	}
	switch (i)
	{
		case 2:
		{
			Form* l = new ShrubberyCreationForm(target);
			std::cout << "Intern creates \033[32m" << form << "\033[0m"
				<< std::endl;
			return l;
		}
		case 0:
		{
			Form* l2 = new RobotomyRequestForm(target);
			std::cout << "Intern creates \033[32m" << form << "\033[0m"
				<< std::endl;
			return l2;
		}
		case 1:
		{
			Form* l3 = new PresidentialPardonForm(target);
			std::cout << "Intern creates \033[32m" << form << "\033[0m"
				<< std::endl;
			return l3;
		}
		default:
		{
			std::cout << "Intern NOT creates \033[33m" << form << "\033[0m"
			<< std::endl;
			return NULL;
		}
	}
}