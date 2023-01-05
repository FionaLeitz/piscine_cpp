#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template< typename T >
void	iter( T * tab, int nbr, void(f(T const &)) ) {
	int	i = 0;
	
	while ( i < nbr ) {
		f(tab[i]);
		i++;
	}
	return ;
}

#endif
