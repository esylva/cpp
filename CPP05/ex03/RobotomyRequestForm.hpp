#ifndef __ROBOTOMYREQUESTFORM_HPP__
# define __ROBOTOMYREQUESTFORM_HPP__

# include <iostream>
# include <cstdlib>
# include <ctime>
# include "Form.hpp"

class RobotomyRequestForm: public Form
{
    public:
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm & operator=(const RobotomyRequestForm &src);
        RobotomyRequestForm(const RobotomyRequestForm &src);
        RobotomyRequestForm(std::string target);

        void        execute(Bureaucrat const & executor) const;
        std::string getTarget() const;
        bool        getIsexec() const;

    private:
        std::string _target;
        int         _sign;
        int         _exec;
};

#endif
