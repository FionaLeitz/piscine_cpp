#include "../headers/Types.hpp"

Types::Types( void ) : _character( 0 ), _integer( 0 ), _float( 0 ), _double( 0 ) {
	return ;
}

Types::Types( char * str ) {
	// detecter le type du litteral avant de faire la bonne conversion
	this->setDouble( static_cast<double>( atol( str ) ) );
	this->setCharacter( static_cast<char>( this->getDouble() ) );
	this->setInteger( static_cast<int>( this->getDouble() ) );
	this->setFloat( static_cast<float>( this->getDouble() ) );
	return ;
}

Types::Types( const Types & value ) : _character( value.getCharacter() ),
	_integer( value.getInteger() ), _float( value.getFloat() ), _double( value.getDouble() ) {
	return ;
}

Types::~Types( void ) {
	return ;
}

Types &	Types::operator=( const Types & rhs ) {
	this->setCharacter( rhs.getCharacter() );
	this->setInteger( rhs.getInteger() );
	this->setFloat( rhs.getFloat() );
	this->setDouble( rhs.getDouble() );
	return *this;
}

char	Types::getCharacter( void ) const {
	return ( this->_character );
}

void	Types::setCharacter( char character ) {
	this->_character = character;
	return ;
}

int	Types::getInteger( void ) const {
	return this->_integer;
}

void	Types::setInteger( int nbr ) {
	this->_integer = nbr;
	return ;
}

float	Types::getFloat( void ) const {
	return this->_float;
}

void	Types::setFloat( float nbr ) {
	this->_float = nbr;
	return ;
}

double	Types::getDouble( void ) const {
	return this->_double;
}

void	Types::setDouble( double nbr ) {
	this->_double = nbr;
	return ;
}

std::ostream &	operator<<( std::ostream & o, Types const & rhs ) {
	o << "char: " << rhs.getCharacter() << std::endl;
	o << "int: " << rhs.getInteger() << std::endl;
	o << "float: " << rhs.getFloat() << std::endl;
	o << "double: " << rhs.getDouble() << std::endl;
	return o;
}
