#include "headers/Span.hpp"

int	main( void ) {
	{
		Span	sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	Span	test;
	try {
		std::cout << "Shortest: " << test.shortestSpan() << std::endl;
	}
	catch ( std::exception & e ) {
		std::cout << "ERROR: " << e.what() << std::endl;
	}
	try {
		test.addNumber(0);
	}
	catch ( std::exception & e ) {
		std::cout << "ERROR: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	Span	tab(10);
	try {
		std::cout << "Shortest: " << tab.shortestSpan() << std::endl;
		std::cout << "Shortest: " << tab.longestSpan() << std::endl;
		tab.addNumber(4);
		tab.addNumber(8);
		tab.addNumber(0);
		tab.addNumber(3);
		std::cout << "Shortest: " << tab.shortestSpan() << std::endl;
		std::cout << "Shortest: " << tab.longestSpan() << std::endl;
	}
	catch ( std::exception & e ) {
		std::cout << "ERROR: " << e.what() << std::endl;
	}
	Span	tab2(10);
	try {
		tab2.addNumber(40);
		tab2.addNumber(80);
		tab2.addNumber(0);
		tab2.addNumber(30);
		tab.addMoreNumber( tab2.getVector().begin(), tab2.getVector().end());
		std::cout << "CHECK : " << tab.getVector()[6] << std::endl;
	}
	catch ( std::exception & e ) {
		std::cout << "ERROR: " << e.what() << std::endl;
	}

	return 0;
}
