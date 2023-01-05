#include "../headers/Span.hpp"

Span::Span( void ) : _N( 0 ), _size( 0 ) {
	return ;
}

Span::Span( unsigned int N ) : _N( N ), _size( 0 ) {
	return ;
}

Span::Span( const Span & value ) : _N( value.getN() ) , _size( value.getSize() ) {
	this->_vector = value.getVector();
	return ;
}

Span::~Span( void ) {
	return ;
}

Span &	Span::operator=( const Span & rhs ) {
	this->_N = rhs.getN();
	this->_size = rhs.getSize();
	this->_vector = rhs.getVector();
	return *this;
}

void	Span::addNumber( int nbr ) {
	if ( this->getSize() >= this->getN() )
		throw( std::overflow_error("This span does not have enough space") );
	_vector.push_back(nbr);
	this->_size++;
	return ;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void	Span::addMoreNumber( std::vector< int >::iterator begin, std::vector< int >::iterator end ) {
	// A VERIFIER PRECISEMENT
	unsigned int	count = end - begin;

	if ( count < this->getN() - this->getSize() )
		throw( std::length_error("Not enough space in this span") );
	this->_vector.insert(this->_vector.end(), begin, end);
	this->_size += count;
	return ;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int	Span::shortestSpan( void ) const {
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

int	Span::longestSpan( void ) const {
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

unsigned int	Span::getN( void ) const {
	return this->_N;
}

unsigned int	Span::getSize( void ) const {
	return this->_size;
}

std::vector< int >	Span::getVector( void ) const {
	return this->_vector;
}
