#include "headers/easyfind.hpp"
#include <list>
#include <vector>

int	main( void ) {
	std::cout << "===== TESTS FOR LIST =====" << std::endl;
	std::list< int > lst;
	try {
		std::cout << easyfind( lst, 3 ) << std::endl;
	}
	catch ( std::exception &e ) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	lst.push_back(1);
	lst.push_back(3);
	lst.push_back(2);
	try {
		std::cout << easyfind( lst, 3 ) << std::endl;
	}
	catch ( std::exception &e ) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	try {
		std::cout << easyfind( lst, 4 ) << std::endl;
	}
	catch ( std::exception &e ) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << std::endl << "===== TESTS FOR VECTOR =====" << std::endl;
	std::vector< int > vec;
	try {
		std::cout << easyfind( vec, 42 ) << std::endl;
	}
	catch ( std::exception &e ) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	vec.push_back(10);
	vec.push_back(-3);
	vec.push_back(42);
	try {
		std::cout << easyfind( vec, 3 ) << std::endl;
	}
	catch ( std::exception &e ) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	try {
		std::cout << easyfind( vec, 42 ) << std::endl;
	}
	catch ( std::exception &e ) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	return 0;
}
