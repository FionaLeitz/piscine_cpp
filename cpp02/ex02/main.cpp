#include "headers/Fixed.hpp"

int	main( void ) {
	Fixed	a(2.2f);
	Fixed	b(2.1f);

	if (a == b)
		std::cout << "a est egale a b" << std::endl;
	else
		std::cout << "a n'est pas egale a b" << std::endl;
	
	if (a != b)
		std::cout << "a n'est pas egale a b" << std::endl;
	else
		std::cout << "a est egale a b" << std::endl;

	// Fixed	c = a + b;
	// std::cout << "c = " << c << std::endl;
	Fixed c = a / b;
	std::cout << "c = " << c << std::endl;
	std::cout << "test = " << 2.2f / 2.1f << std::endl;

	// Fixed		a;
	// Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;

	// std::cout << b << std::endl;
	
	// std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}