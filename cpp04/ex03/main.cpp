#include "headers/Ice.hpp"
#include "headers/Cure.hpp"

int	main( void ) {
	Ice		test_ice;
	Cure	test_cure;
	std::cout << "For ice : " << test_ice.getType() << std::endl;
	std::cout << "For cure : " << test_cure.getType() << std::endl;
	return 0;
}