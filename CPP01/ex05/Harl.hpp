/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 06:32:45 by esylva            #+#    #+#             */
/*   Updated: 2022/04/21 10:24:04 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>
# include <string>

class Harl {

private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

public:
	Harl();
	~Harl();
	void complain( std::string level );
};

#endif

// The goal of this exercise is to use pointers to member functions. This is not a
// suggestion. Harl has to complain without using a forest of if/else if/else. It doesn’t think
// twice!
// Create and turn in tests to show that Harl complains a lot. You can use the example
// comments.