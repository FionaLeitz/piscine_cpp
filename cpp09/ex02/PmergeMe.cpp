#include <vector>
#include <deque>
#include <string>
#include <iostream>
#include <cstdlib>


std::vector<long>	insert_sort( std::vector<long> vec, int first, int last ) {

	// parcourir tout les nombre que l'on veut trier
	for ( int count = first; count <= last; count++ ) {
		// sauvegarder un nombre
		long tmp = vec[count];
		// sauvegarder la position
		int	j = count;
		// boucler jusqu'a trouver sa position a gauche
		while ( ( j > first ) && ( vec[j - 1] > tmp ) ) {
			vec[j] = vec[j - 1];
			j--;
		}
		vec[j] = tmp;
	}
	return vec;
}

std::vector<long>	merge_sort( std::vector<long> vec, int first, int middle, int last ) {
	int					count = first;
	int					count_middle = middle + 1;
	int					count_tmp = first;
	std::vector<long>	tmp = vec;

	while ( count <= middle && count_middle <= last ) {
		if ( vec[count] < vec[count_middle] ) {
			tmp[count_tmp] = vec[count];
			count++;
		}
		else {
			tmp[count_tmp] = vec[count_middle];
			count_middle++;
		}
		count_tmp++;
	}
	for ( ; count_middle <= last; count_middle++, count_tmp++ )
		tmp[count_tmp] = vec[count_middle];
	for ( ; count <= middle; count++, count_tmp++ )
		tmp[count_tmp] = vec[count];
	for ( count = first; count <= last; count++ )
		vec[count] = tmp[count];

	return vec;
}

std::vector<long>	merge_insert_sort_vector( std::vector<long> vec, int first, int last ) {

	// s'il y a encore des nombres a trier
	if ( first < last ) {
		// si il y a moins de 10 nombre, on fait un insert sort
		if ( ( last - first ) <= 10 )
			vec = insert_sort( vec, first, last );
		// sinon recursive en divisant le paquet par 2
		else {
			int	middle = ( first + last ) / 2;
			vec = merge_insert_sort_vector( vec, first, middle );
			vec = merge_insert_sort_vector( vec, middle + 1, last );
			vec = merge_sort( vec, first, middle, last );
		}
	}

	return vec;
}

///////////////////////////////////////////////////////////

std::deque<long>	insert_sort( std::deque<long> deq, int first, int last ) {

	// parcourir tout les nombre que l'on veut trier
	for ( int count = first; count <= last; count++ ) {
		// sauvegarder un nombre
		long tmp = deq[count];
		// sauvegarder la position
		int	j = count;
		// boucler jusqu'a trouver sa position a gauche
		while ( ( j > first ) && ( deq[j - 1] > tmp ) ) {
			deq[j] = deq[j - 1];
			j--;
		}
		deq[j] = tmp;
	}
	return deq;
}

std::deque<long>	merge_sort( std::deque<long> deq, int first, int middle, int last ) {
	int					count = first;
	int					count_middle = middle + 1;
	int					count_tmp = first;
	std::deque<long>	tmp = deq;

	while ( count <= middle && count_middle <= last ) {
		if ( deq[count] < deq[count_middle] ) {
			tmp[count_tmp] = deq[count];
			count++;
		}
		else {
			tmp[count_tmp] = deq[count_middle];
			count_middle++;
		}
		count_tmp++;
	}
	for ( ; count_middle <= last; count_middle++, count_tmp++ )
		tmp[count_tmp] = deq[count_middle];
	for ( ; count <= middle; count++, count_tmp++ )
		tmp[count_tmp] = deq[count];
	for ( count = first; count <= last; count++ )
		deq[count] = tmp[count];

	return deq;
}

std::deque<long>	merge_insert_sort_deque( std::deque<long> deq, int first, int last ) {

	// s'il y a encore des nombres a trier
	if ( first < last ) {
		// si il y a moins de 10 nombre, on fait un insert sort
		if ( ( last - first ) <= 10 )
			deq = insert_sort( deq, first, last );
		// sinon recursive en divisant le paquet par 2
		else {
			int	middle = ( first + last ) / 2;
			deq = merge_insert_sort_deque( deq, first, middle );
			deq = merge_insert_sort_deque( deq, middle + 1, last );
			deq = merge_sort( deq, first, middle, last );
		}
	}

	return deq;
}
