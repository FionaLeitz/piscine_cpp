#include <string>
#include <iostream>
#include <cstdlib>

int	isnumber( char *number ) {
	int	count = 0;
	while ( isdigit( number[count] ) != 0 )
		count++;
	if ( number[count] != '\0' )
		return 1;
	return 0;

}

// dans cette fonction, remplir les conteneurs ?
int	check_sequence( int size, char **numbers ) {

	int	count = 0;
	while ( count < size ) {
		if ( std::string( numbers[count] ).size() > 11 || atol( numbers[count] ) > 2147483647 )
			return 1;
		if ( isnumber( numbers[count] ) != 0 )
			return 1;
		count++;
	}

	return 0;
}

// faire une fonction merge insert sort pour un des conteneurs
// puis copier coller pour le deuxieme conteneur
// apres on verra pour checker le temps
int	main( int argc, char ** argv ) {
	if ( argc < 2 )
		std::cout << "Error: wrong number of argument, at least one needed." << std::endl;

	if ( check_sequence( argc - 1, &argv[1] ) == 1 )
		std::cout << "Error" << std::endl;
	else
		std::cout << "Numbers are ok !" << std::endl;
	
	return 0;
}