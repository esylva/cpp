/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:51:53 by jobject           #+#    #+#             */
/*   Updated: 2021/12/15 15:52:19 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
	public:
		Fixed(void);
		Fixed(const int	integer);
		Fixed(const float	floating);
		Fixed(const Fixed	&other);
		~Fixed(void);
		Fixed	&operator=(const Fixed	&other);
		bool	operator>(const Fixed	&other) const;
		bool	operator<(const Fixed	&other) const;
		bool	operator>=(const Fixed	&other) const;
		bool	operator<=(const Fixed	&other) const;
		bool	operator==(const Fixed	&other) const;
		bool	operator!=(const Fixed	&other) const;
		Fixed	operator+(const Fixed	&other);
		Fixed	operator-(const Fixed	&other);
		Fixed	operator*(const Fixed	&other);
		Fixed	operator/(const Fixed	&other);
		Fixed	operator++(int);
		Fixed	&operator++(void);
		Fixed	operator--(int);
		Fixed	&operator--(void);
		int		toInt(void) const;
		float	toFloat(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const	_intToConvert);
		static Fixed		&min(Fixed	&f1, Fixed	&f2);
		static const  Fixed &min(const Fixed	&f1, const Fixed	&f2);
		static Fixed		&max(Fixed	&f1, Fixed	&f2);
		static const  Fixed &max(const Fixed	&f1, const Fixed	&f2);
	private:
		int					intToConvert;
		static int const	raw = 8;
};

std :: ostream	&operator<<(std :: ostream &stream, const Fixed	&other);

#endif