#include <vector>
#include <deque>
#include <string>
#include <iostream>
#include <cstdlib>
#include <sys/time.h>

std::vector<long>	merge_insert_sort_vector( std::vector<long> vec, int first, int last );
std::deque<long>	merge_insert_sort_deque( std::deque<long> deq, int first, int last );

int	isnumber( char *number ) {
	int	count = 0;
	while ( isdigit( number[count] ) != 0 )
		count++;
	if ( number[count] != '\0' )
		return 1;
	return 0;

}

// string vide
int	check_sequence( int size, char **numbers ) {

	int	count = 0;
	while ( count < size ) {
		if ( isnumber( numbers[count] ) != 0 || numbers[count][0] == '\0' )
			return 1;
		count++;
	}

	return 0;
}

std::vector<long>	fill_vector( int size, char **numbers ) {
	int					count = 0;
	std::vector<long>	vec;

	while ( count < size ) {
		vec.push_back( atol( numbers[count] ) );
		if ( vec.back() > 2147483648 || std::string( numbers[count] ).size() > 11 )
			throw std::invalid_argument( "Error" );
		count++;
	}

	return vec;
}

std::deque<long>	fill_deque( int size, char **numbers ) {
	int					count = 0;
	std::deque<long>	deq;

	while ( count < size ) {
		deq.push_back( atol( numbers[count] ) );
		if ( deq.back() > 2147483648 || std::string( numbers[count] ).size() > 11 )
			throw std::invalid_argument( "Error" );
		count++;
	}

	return deq;
}

int	main( int argc, char ** argv ) {
	if ( argc < 2 ) {
		std::cout << "Error: wrong number of argument, at least one needed." << std::endl;
		return 1;
	}

	if ( check_sequence( argc - 1, &argv[1] ) == 1 ) {
		std::cout << "Error" << std::endl;
		return 1;
	}

	// fonction pour remplir le conteneur 1


	timeval tim;
	gettimeofday(&tim,NULL);
	unsigned long long	t1 = tim.tv_usec;


	std::vector<long>	vec;
	try {
		vec = fill_vector( argc - 1, &argv[1] );
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
		return 1;
	}
	// std::cout << "Before:	";
	std::vector<long>::iterator	it;
	// = vec.begin();
	// while ( it != vec.end() ) {
	// 	std::cout << *it << " ";
	// 	it++;
	// }
	// std::cout << std::endl;

	// fonction pour trier le conteneur 1
	vec = merge_insert_sort_vector( vec, 0, vec.size() - 1 );

	gettimeofday(&tim,NULL);
	unsigned long long	t2 = tim.tv_usec;

	std::cout << "After:	";
	it = vec.begin();
	while ( it != vec.end() ) {
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
	std::cout << "t2 = " << t2 << " et t1 = " << t1 << std::endl;
	std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector : " << t2 - t1 << std::endl;
	// fonction pour remplir le conteneur 2
	std::deque<long>	deq;
	try {
		deq = fill_deque( argc - 1, &argv[1] );
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
		return 1;
	}
	// fonction pour trier le conteneur 2
	deq = merge_insert_sort_deque( deq, 0, deq.size() - 1 );
	std::cout << "Time to process a range of " << argc - 1 << " elements with std::deque : " << std::endl;
	return 0;
}