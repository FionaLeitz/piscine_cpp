#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <iterator>

class	Span {
	public:
		Span( void );
		Span( unsigned int N );
		Span( const Span & value );
		~Span( void );

		Span &		operator=( const Span & rhs );

		void	addNumber( int const nbr );

		template< typename iterator >
		void	addNumber( iterator begin, iterator end ) {
			unsigned int	count = end - begin;

			if ( count > this->getN() - this->getSize() )
				throw( std::length_error("Not enough space in this span") );
			this->_vector.insert(this->_vector.end(), begin, end);
			this->_size += count;
			return ;
		}
		int		shortestSpan( void );
		int		longestSpan( void );

		unsigned int		getN( void );
		unsigned int		getSize( void );
		std::vector< int >	getVector( void );
	private:
		unsigned int		_N;
		unsigned int		_size;
		std::vector< int > 	_vector;

};

#endif