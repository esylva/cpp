/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 00:00:15 by esylva            #+#    #+#             */
/*   Updated: 2022/04/24 00:00:15 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed {

	public:

		Fixed(void);
		Fixed(const int param);
		Fixed(const float param);
		Fixed (const Fixed &src);
		~Fixed();

		Fixed & operator=(const Fixed &val);

		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		
	private:
		int					_fixedPointNumber;
		static const int	_numberOfBits = 8;
		

};
	std::ostream & operator<<(std::ostream &stream, const Fixed &val);

#endif
