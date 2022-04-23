#include "Fixed.hpp"

int main( void ) {

	Fixed a (35.5f);
	// Fixed const b(3.5);
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	Fixed const c( 5.05f * 2 );





	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	std::cout << "c = " << c << std::endl;

	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	std::cout << "b + a = " << (b + a) << std::endl;
	std::cout << "b - a = " << (b - a) << std::endl;
	std::cout << "a / b = " << (a / b) << std::endl;
	std::cout << "b * a = " << (b * a) << std::endl;
	
	std::cout << "c + a = " << (c + a) << std::endl;
	std::cout << "a - c = " << (a - c) << std::endl;
	std::cout << "c * a = " << (c * a) << std::endl;
	std::cout << "a / c = " << (a / c) << std::endl;
	// std::cout << "b != a = " << (b != a) << std::endl;
	// std::cout << "b == a = " << (b == a) << std::endl;



	// std::cout << Fixed::max( a, b ) << std::endl;

	// std::cout << "b > a = " << (b > a) << std::endl;
	// std::cout << "b < a = " << (b < a) << std::endl;
	// std::cout << "b >= a = " << (b >= a) << std::endl;
	// std::cout << "b <= a = " << (b <= a) << std::endl;
	// std::cout << "b != a = " << (b != a) << std::endl;
	// std::cout << "b == a = " << (b == a) << std::endl;

	}
