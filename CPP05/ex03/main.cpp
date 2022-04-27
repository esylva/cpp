#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void ch_del(Form *l)
{
	(l == NULL) ? (void)l : delete(l);
	return ;
}

int main()
{
	Bureaucrat a("a", 12);
	Bureaucrat b("b", 100);
	Bureaucrat president("\033[1;7;35mPresident\033[0m", 1);
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	rrf->beSigned(a);
	rrf->execute(a);
	ch_del(rrf);
	std::cout << "____________________" << std::endl;
	Form *ffr;
	ffr = someRandomIntern.makeForm("not in", "df");
	ch_del(ffr);
	std::cout << "____________________" << std::endl;
	ffr = someRandomIntern.makeForm("president request", "lilu_dalas");
	ffr->beSigned(a);
	ffr->execute(president);
	ch_del(ffr);
	return 0;
}
