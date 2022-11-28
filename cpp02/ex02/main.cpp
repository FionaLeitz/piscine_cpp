#include "headers/Fixed.hpp"

int	main( int argc, char **argv ) {
	if (argc == 1)
		return 1;
	if (atoi(argv[1]) == 1)
	{
		Fixed	a(2.2f);
		Fixed	b(2.1f);

		std::cout << "===== Test operateur de comparaison =====" << std::endl;
		if (a > b)
			std::cout << a << " est superieur a " << b << std::endl;
		else
			std::cout << a << " est inferieur ou egale a " << b << std::endl;
		if (a < b)
			std::cout << a << " est inferieur a " << b << std::endl;
		else
			std::cout << a << " est superieur ou egale a " << b << std::endl;
		if (a >= b)
			std::cout << a << " est superieur ou egale a " << b << std::endl;
		else
			std::cout << a << " est inferieur a " << b << std::endl;
		if (a <= b)
			std::cout << a << " est inferieur ou egale a " << b << std::endl;
		else
			std::cout << a << " est superieur a " << b << std::endl;
		if (a == b)
			std::cout << a << " est egale a " << b << std::endl;
		else
			std::cout << a << " n'est pas egale a " << b << std::endl;
		if (a != b)
			std::cout << a << " n'est pas egale a " << b << std::endl;
		else
			std::cout << a << " est egale a " << b << std::endl;
	}
	if (atoi(argv[1]) == 2)
	{
		Fixed	a(2.2f);
		Fixed	b(2.1f);
		Fixed	c;

		std::cout << "===== Test operateur arithmetique =====" << std::endl;
		c = a + b;
		std::cout << a << " + " << b << " = " << c << std::endl;
		c = a - b;
		std::cout << a << " - " << b << " = " << c << std::endl;
		c = a * b;
		std::cout << a << " * " << b << " = " << c << std::endl;
		c = a / b;
		std::cout << a << " / " << b << " = " << c << std::endl;
	}
	if (atoi(argv[1]) == 3)
	{
		Fixed	a = 0;

		std::cout << "===== Test operateur d'incrementation =====" << std::endl;
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl << std::endl;
		std::cout << a << std::endl;
		std::cout << --a << std::endl;
		std::cout << a << std::endl;
		std::cout << a-- << std::endl;
		std::cout << a << std::endl;
	}
	if (atoi(argv[1]) == 4)
	{
		Fixed	a(30);
		Fixed	b(20);
		const Fixed	c(30);
		const Fixed	d(20);

		std::cout << "===== Test min et max =====" << std::endl;
		std::cout << "Le min entre " << a << " et " << b << " est : " << Fixed::min( a, b ) << std::endl;
		std::cout << "Le min entre " << c << " et " << d << " est : " << Fixed::min( c, d ) << std::endl;
		std::cout << "Le max entre " << a << " et " << b << " est : " << Fixed::max( a, b ) << std::endl;
		std::cout << "Le max entre " << c << " et " << d << " est : " << Fixed::max( c, d ) << std::endl;
	}
	return 0;
}