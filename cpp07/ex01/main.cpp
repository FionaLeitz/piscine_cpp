#include "headers/iter.hpp"

template< typename T >
void	display( T to_display ) {
	std::cout << to_display << ", ";
	return ;
}

int	main( void ) {
	int		tab[10] = {1,2,3,4,5,6,7,8,9,10};
	char	str[10] = "bonjour !";

	iter<int>(tab, 10, &display);
	std::cout << std::endl;
	iter<char>(str, 9, &display);
	std::cout << std::endl;

	return 0;
}


