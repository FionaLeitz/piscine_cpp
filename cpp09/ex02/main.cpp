#include <vector>
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

// std::vector<int>	insert_sort( std::vector<int> vec, int first, int last ) {

// 	// parcourir tout les nombre que l'on veut trier
// 	for ( int count = first; count <= last; count++ ) {
// 		// sauvegarder un nombre
// 		int tmp = vec[count];
// 		// sauvegarder la position
// 		int	j = count;
// 		// boucler jusqu'a trouver sa position a gauche
// 		while ( ( j > first ) && ( vec[j - 1] > tmp ) ) {
// 			vec[j] = vec[j - 1];
// 			j--;
// 		}
// 		vec[j] = tmp;
// 	}
// 	return vec;
// }

// std::vector<int>	merge_sort( std::vector<int> vec, int first, int middle, int last ) {
// 	int					count = first;
// 	int					count_middle = middle + 1;
// 	int					count_tmp = first;
// 	std::vector<int>	tmp = vec;

// 	while ( count <= middle && count_middle <= last ) {
// 		if ( vec[count] < vec[count_middle] ) {
// 			tmp[count_tmp] = vec[count];
// 			count++;
// 		}
// 		else {
// 			tmp[count_tmp] = vec[count_middle];
// 			count_middle++;
// 		}
// 		count_tmp++;
// 	}
// 	for ( ; count_middle <= last; count_middle++, count_tmp++ )
// 		tmp[count_tmp] = vec[count_middle];
// 	for ( ; count <= middle; count++, count_tmp++ )
// 		tmp[count_tmp] = vec[count];
// 	for ( count = first; count <= last; count++ )
// 		vec[count] = tmp[count];

// 	return vec;
// }

// std::vector<int>	merge_insert_sort_vector( std::vector<int> vec, int first, int last ) {

// 	// s'il y a encore des nombres a trier
// 	if ( first < last ) {
// 		// si il y a moins de 2 nombre, on fait un insert sort
// 		// if ( ( last - first ) <= 2 )
// 		// 	vec = insert_sort( vec, first, last );
// 		// // sinon recursive en divisant le paquet par 2
// 		// else {
// 			int	middle = ( first + last ) / 2;
// 			vec = merge_insert_sort_vector( vec, first, middle );
// 			vec = merge_insert_sort_vector( vec, middle + 1, last );
// 			vec = merge_sort( vec, first, middle, last );
// 		// }
// 	}

// 	return vec;
// }



// d'abord, faire un deuxieme vector pour ranger l'autre partie des pairs
// ensuite trier avec un merge sort (???)
// faire les memes mouvements sur le deuxieme vector
// insert sort le deuxieme vector vers la gauche
std::vector<int>	merge_insert_sort_vector( std::vector<int> vec ) {
	std::vector<int>			pair;
	std::vector<int>::iterator	it = vec.begin();
	std::vector<int>::iterator	ite = vec.end() - 1;

	while ( it != ite ) {
		if ( *it > *(it + 1) ) {
			pair.push_back( *it );
			vec.erase( it );
		}
		// else {
		// 	pair.push_back( *(it + 1) );
		// 	vec.erase( it + 1 );
		// }
		it++;
	}


	it = vec.begin();
	while ( it != vec.end() ) {
		std::cout << *it << ", ";
		it++;
	}
	std::cout << std::endl;

	it = pair.begin();
	while ( it != pair.end() ) {
		std::cout << *it << ", ";
		it++;
	}
	std::cout << std::endl;

	return vec;
}

std::vector<int>	fill_vector( int size, char **numbers ) {
	int					count = 0;
	std::vector<int>	vec;

	while ( count < size ) {
		vec.push_back( atoi( numbers[count] ) );
		count++;
	}

	return vec;
}

int	main( int argc, char ** argv ) {
	if ( argc < 2 )
		std::cout << "Error: wrong number of argument, at least one needed." << std::endl;

	if ( check_sequence( argc - 1, &argv[1] ) == 1 ) {
		std::cout << "Error" << std::endl;
		return 1;
	}
	else
		std::cout << "Numbers are ok !" << std::endl;

	// fonction pour remplir le conteneur 1
	std::vector<int>	vec = fill_vector( argc - 1, &argv[1] );

	// std::vector<int>::iterator	it = vec.begin();
	// while ( it != vec.end() ) {
	// 	std::cout << *it << ", ";
	// 	it++;
	// }
	// std::cout << std::endl;

	// fonction pour trier le conteneur 1
	vec = merge_insert_sort_vector( vec );

	// it = vec.begin();
	// while ( it != vec.end() ) {
	// 	std::cout << *it << ", ";
	// 	it++;
	// }
	// std::cout << std::endl;

	// fonction pour remplir le conteneur 2
	// fill_deque( &cont2, &argv[1] );

	// fonction pour trier le conteneur 2
	// merge_insert_sort_deque( &cont2 );

	return 0;
}