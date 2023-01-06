#include "headers/Span.hpp"

int	main( void ) {
	{
		std::cout << "===== TEST DU SUJET =====" << std::endl;
		Span	sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	std::cout << std::endl << "===== TEST D'ERREUR =====" << std::endl;
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
	try {
		std::cout << "Longest: " << test.longestSpan() << std::endl;
	}
	catch ( std::exception & e ) {
		std::cout << "ERROR: " << e.what() << std::endl;
	}

	std::cout << std::endl << "===== TEST AJOUT + LONGEST / SHORTEST =====" << std::endl;
	Span	tab(8);
	try {
		tab.addNumber(4);
		tab.addNumber(8);
		tab.addNumber(0);
		tab.addNumber(3);
		std::cout << "tab[0]: " << tab.getVector()[0] << std::endl;
		std::cout << "tab[1]: " << tab.getVector()[1] << std::endl;
		std::cout << "tab[2]: " << tab.getVector()[2] << std::endl;
		std::cout << "tab[3]: " << tab.getVector()[3] << std::endl;
		std::cout << "Shortest: " << tab.shortestSpan() << std::endl;
		std::cout << "Longest: " << tab.longestSpan() << std::endl;
	}
	catch ( std::exception & e ) {
		std::cout << "ERROR: " << e.what() << std::endl;
	}

	std::cout << std::endl << "===== TEST AJOUT PLAGE D'ITERATEUR =====" << std::endl;
	std::vector< int > vect;
	vect.push_back(2);
	vect.push_back(4);
	vect.push_back(6);
	try {
		tab.addNumber(vect.begin(), vect.end());
		std::cout << "tab[0]: " << tab.getVector()[0] << std::endl;
		std::cout << "tab[1]: " << tab.getVector()[1] << std::endl;
		std::cout << "tab[2]: " << tab.getVector()[2] << std::endl;
		std::cout << "tab[3]: " << tab.getVector()[3] << std::endl;
		std::cout << "tab[4]: " << tab.getVector()[4] << std::endl;
		std::cout << "tab[5]: " << tab.getVector()[5] << std::endl;
		std::cout << "tab[6]: " << tab.getVector()[6] << std::endl;
		tab.addNumber(vect.begin(), vect.end());
	}
	catch ( std::exception & e ) {
		std::cout << "ERROR: " << e.what() << std::endl;
	}
	
	std::cout << std::endl << "===== TEST 10 000 nombres =====" << std::endl;
	Span	big(10050);
	try {
		int	count = -1;

		while ( ++count < 10000 ) {
			big.addNumber(count);
		}
		std::cout << "big[9999] = " << big.getVector()[9999] << std::endl;
		std::cout << "big[555] = " << big.getVector()[555] << std::endl;
		big.addNumber(vect.begin(), vect.end());
		std::cout << "big[10000] = " << big.getVector()[10000] << std::endl;
		std::cout << "big[10002] = " << big.getVector()[10002] << std::endl;
	}
	catch ( std::exception & e ) {
		std::cout << "ERROR: " << e.what() << std::endl;
	}
	
	return 0;
}
