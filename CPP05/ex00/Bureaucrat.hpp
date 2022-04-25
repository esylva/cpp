/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 23:17:26 by esylva            #+#    #+#             */
/*   Updated: 2022/04/25 23:17:26 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

class Bureaucrat {

    private:
        std::string const   _name;
        int                 _grade;
    public:


};

#endif

// And a grade that ranges from 1 (highest possible grade) to 150 (lowest possible
// grade).
// Any attempt to instantiate a Bureaucrat using an invalid grade must throw an ex-
// ception:
// either a Bureaucrat::GradeTooHighException or a Bureaucrat::GradeTooLowException.