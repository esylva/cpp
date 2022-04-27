#ifndef __PRESIDENTIALPARDONFORM_HPP__
# define __PRESIDENTIALPARDONFORM_HPP__

# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm: public Form
{
    public:
        PresidentialPardonForm();
        ~PresidentialPardonForm();
        PresidentialPardonForm & operator=(const PresidentialPardonForm &src);
        PresidentialPardonForm(const PresidentialPardonForm &src);
        PresidentialPardonForm(std::string target);

        void        execute(Bureaucrat const & executor) const;
        std::string getTarget() const;

    private:
        std::string _target;
        int         _sign;
        int         _exec;
};

#endif
