#include "headers/PmergeMe.hpp"

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

int	start( int argc, char ** argv ) {

	if ( argc < 2 ) {
		std::cout << "Error: wrong number of argument, at least one needed." << std::endl;
		return 1;
	}
	if ( check_sequence( argc - 1, &argv[1] ) == 1 ) {
		std::cout << "Error" << std::endl;
		return 1;
	}

	std::cout << "Before: ";
	for ( int i = 1; i < argc; i++ )
		std::cout << argv[i] << " ";
	std::cout << std::endl;

	return 0;
}

int	main( int argc, char ** argv ) {

	if ( start( argc, argv ) == 1 )
		return 1;

	double	time_taken;
	clock_t	start, end;
	start = clock();

	std::vector<long>	vec;
	try {
		vec = fill_vector( argc - 1, &argv[1] );
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
		return 1;
	}
	vec = merge_insert_sort( vec, 0, vec.size() - 1 );
	end = clock();
	time_taken = double( end - start );

	std::cout << "After:	";
	std::vector<long>::iterator	it = vec.begin();
	while ( it != vec.end() ) {
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
	std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector : " << time_taken << std::endl;
	

	start = clock();
	std::deque<long>	deq;
	try {
		deq = fill_deque( argc - 1, &argv[1] );
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
		return 1;
	}
	deq = merge_insert_sort( deq, 0, deq.size() - 1 );
	end = clock();
	time_taken = double( end - start );
	std::cout << "Time to process a range of " << argc - 1 << " elements with std::deque : " << time_taken << std::endl;
	return 0;
}