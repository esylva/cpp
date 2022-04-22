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