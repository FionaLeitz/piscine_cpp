#include "headers/Array.hpp"
#include <cstdlib>

#define MAX_VAL 750
int	main( void ) {
	Array< int >	empty;
	std::cout << "Size de empty : " << empty.size() << std::endl;
	try {
		std::cout << "===== Acceder a une case inexistante =====" << std::endl;
		std::cout << "empty[2] = " << empty[2] << std::endl;;
	}
	catch ( std::exception &e ) {
		std::cout << "Error : " << e.what() << std::endl;
	}
	std::cout << std::endl;

	Array< int >	numbers(10);
	std::cout << "Size de numbers : " << numbers.size() << std::endl;
	try {
		std::cout << "===== Acceder a une case existante =====" << std::endl;
		std::cout << "numbers[0] = " << numbers[0] << std::endl;
		std::cout << "numbers[2] = " << numbers[2] << std::endl;
		std::cout << "===== Acceder a une case inexistante =====" << std::endl;
		std::cout << "numbers[10] = " << numbers[10] << std::endl;
	}
	catch ( std::exception &e ) {
		std::cout << "Error : " << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "===== Cretion de tab avec constructeur par copie =====" << std::endl;
	Array< int > tab(numbers);
	std::cout << "Size de tab : " << tab.size() << std::endl;
	std::cout << "===== Cretion de other_tab avec operateur '=' =====" << std::endl;
	Array< int > other_tab = numbers;
	std::cout << "Size de other_tab : " << other_tab.size() << std::endl;

	std::cout << std::endl;
	std::cout << "===== Modification de numbers =====" << std::endl;
	std::cout << "numbers[5] = " << numbers[5] << std::endl;
	numbers[5] = 42;
	std::cout << "===== Modification faite ! =====" << std::endl;
	std::cout << "numbers[5] = " << numbers[5] << std::endl;

	std::cout << "===== Les copies ne sont pas modifiees =====" << std::endl;
	std::cout << "tab[5] = " << tab[5] << std::endl;
	std::cout << "other_tab[5] = " << other_tab[5] << std::endl;

	std::cout << std::endl;
	const Array< char > test(3);
	try {
		std::cout << "===== Test avec char et const =====" << std::endl;
		std::cout << "test[0] = " << test[0] << std::endl;
		std::cout << "test[2] = " << test[2] << std::endl;
		std::cout << "===== Acceder a une case inexistante =====" << std::endl;
		std::cout << "test[10] = " << test[10] << std::endl;
	}
	catch ( std::exception &e ) {
		std::cout << "Error : " << e.what() << std::endl;
	}

	return 0;
}
