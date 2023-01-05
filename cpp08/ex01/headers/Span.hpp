#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>

class	Span {
	public:
		Span( void );
		Span( unsigned int N );
		Span( const Span & value );
		~Span( void );

		Span &		operator=( const Span & rhs );

		void	addNumber( int nbr );
		void	addMoreNumber( std::vector< int >::iterator begin, std::vector< int >::iterator end );
		int		shortestSpan( void ) const;
		int		longestSpan( void ) const;

		unsigned int		getN( void ) const;
		unsigned int		getSize( void ) const;
		std::vector< int >	getVector( void ) const;

	private:
		unsigned int		_N;
		unsigned int		_size;
		std::vector< int > 	_vector;
};

#endif