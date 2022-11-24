#include "headers/Fixed.hpp"

int	main( void ) {

	Fixed	a;
	Fixed const	b( 10 );
	Fixed const	c( 42.42f );
	Fixed const	d( b );

	std::cout << "test ? " << (1 << 3) << std::endl;

	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	return 0;
}

/*
=== Fixed a;
Default constructor called

=== Fixed const b( 10 );
Int constructor called

=== Fixed const c ( 42.42f );
Float constructor called

=== Fixed const d( b );
Copy constructor called

=== a =
Copy assignment operator called

=== Fixed( 1234.4321f);
Float constructor called
=== ???
Copy assignment operator called

=== fin de Fixed( 1234.4321f);
Destructor called

a is 1234.43
b is 10
c is 42.4219
d is 10

a is 1234 as integer
b is 10 as integer
c is 42 as integer
d is 10 as integer

=== fin du programme, destructors
Destructor called
Destructor called
Destructor called
Destructor called
*/