#ifndef __SHRUBBERYCREATIONFORM_HPP__
# define __SHRUBBERYCREATIONFORM_HPP__

# include <iostream>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
    public:
        ShrubberyCreationForm();
        ~ShrubberyCreationForm();
        ShrubberyCreationForm & operator=(const ShrubberyCreationForm &src);
        ShrubberyCreationForm(const ShrubberyCreationForm &src);
        ShrubberyCreationForm(std::string target);

        void        execute(Bureaucrat const & executor) const;
        std::string getTarget() const;

    private:
        std::string _target;
        int         _sign;
        int         _exec;
};

#endif