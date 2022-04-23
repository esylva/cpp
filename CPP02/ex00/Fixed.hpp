/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 23:59:00 by esylva            #+#    #+#             */
/*   Updated: 2022/04/23 23:59:00 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {

	public:

		Fixed(void);
		Fixed (const Fixed &src);
		~Fixed();

		Fixed & operator=(const Fixed &val);

		int getRawBits( void ) const;
		void setRawBits( int const raw );

	private:
		int			_fixedPointNumber;
		static const int	_numberOfBits = 8;
};
#endif