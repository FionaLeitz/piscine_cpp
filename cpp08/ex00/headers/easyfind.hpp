#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

template< typename T >
int	easyfind( T x, int nbr) {
	typename T::const_iterator	res = find(x.begin(), x.end(), nbr);
	if ( res == x.end() )
		throw( std::invalid_argument( "value not found" ) );
	else
		return *res;
}

#endif
