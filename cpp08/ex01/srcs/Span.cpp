#include "../headers/Span.hpp"

Span::Span( void ) : _N( 0 ), _size( 0 ) {
	return ;
}

Span::Span( unsigned int N ) : _N( N ), _size( 0 ) {
	return ;
}

Span::Span( const Span & value ) : _N( value._N ) , _size( value._size ) {
	this->_vector = value._vector;
	return ;
}

Span::~Span( void ) {
	return ;
}

Span &	Span::operator=( const Span & rhs ) {
	this->_N = rhs._N;
	this->_size = rhs._size;
	this->_vector = rhs._vector;
	return *this;
}

void	Span::addNumber( int nbr ) {
	if ( this->getSize() >= this->getN() )
		throw( std::overflow_error("This span does not have enough space") );
	_vector.push_back(nbr);
	this->_size++;
	return ;
}

int	Span::shortestSpan( void ) {
	std::vector< int >				tmp;
	std::vector< int >::iterator	it;
	std::vector< int >::iterator	ite;
	int								span;

	if ( this->getSize() < 2 )
		throw( std::length_error("Not enough element in this span") );
	tmp = this->getVector();
	sort(tmp.begin(), tmp.end());
	it = tmp.begin();
	ite = tmp.end();
	span = abs(*it - *(it + 1));
	while ( ++it + 1 != ite ) {
		if ( span > abs(*it - *(it + 1)) )
			span = abs(*it - *(it + 1));
	}
	return span;
}

int	Span::longestSpan( void ) {
	std::vector< int >				tmp = this->getVector();
	std::vector< int >::iterator	it;
	std::vector< int >::iterator	ite;

	if ( this->getSize() < 2 )
		throw( std::length_error("Not enough element in this span") );
	sort(tmp.begin(), tmp.end());
	it = tmp.begin();
	ite = tmp.end();
	return abs(*it - *(ite - 1));
}

unsigned int	Span::getN( void ) {
	return this->_N;
}

unsigned int	Span::getSize( void ) {
	return this->_size;
}

std::vector< int >	Span::getVector( void ) {
	return this->_vector;
}
