#include "headers/A.hpp"
#include "headers/B.hpp"
#include "headers/C.hpp"
#include <cstdlib>
#include <iostream>
#include <stdexcept>

Base *	generate( void ) {
	srand(time(NULL));
	int	i = rand() % 3;
	if ( i == 0 ) {
		std::cout << "===== IN GENERATE :   This is an A" << std::endl;
		return new A;
	}
	else if ( i == 1 ) {
		std::cout << "===== IN GENERATE :   This is a B" << std::endl;
		return new B;
	}
	else {
		std::cout << "===== IN GENERATE :   This is a C" << std::endl;
		return new C;
	}
}

void	identify( Base * p ) {
	A *	test1 = dynamic_cast<A *>(p);
	if ( test1 != NULL ) {
		std::cout << "===== IN IDENTIFY 1 : This is an A" << std::endl;
		return ;
	}
	B *	test2 = dynamic_cast<B *>(p);
	if ( test2 != NULL ) {
		std::cout << "===== IN IDENTIFY 1 : This is a B" << std::endl;
		return ;
	}
	C *	test3 = dynamic_cast<C *>(p);
	if ( test3 != NULL ) {
		std::cout << "===== IN IDENTIFY 1 : This is a C" << std::endl;
		return ;
	}
}

void	identify( Base & p ) {
	try {
		A &	test1 = dynamic_cast<A &>(p);
		std::cout << "===== IN IDENTIFY 2 : This is an A" << std::endl;
		(void)test1;
		return ;
	}
	catch ( std::exception &bc ) {}
	try {
		B &	test2 = dynamic_cast<B &>(p);
		std::cout << "===== IN IDENTIFY 2 : THis is a B" << std::endl;
		(void)test2;
		return ;
	}
	catch ( std::exception &bc ) {}
	try {
		C &	test3 = dynamic_cast<C &>(p);
		std::cout << "===== IN IDENTIFY 2 : This is a C" << std::endl;
		(void)test3;
		return ;
	}
	catch ( std::exception &bc ) {}
}

int	main( void ) {
	Base * tmp = generate();
	identify( tmp );
	identify( *tmp );
	delete tmp;
	return 0;
}
