#include "../headers/Animal.hpp"

Animal::Animal( void ) : _type( "alive" ) {
	std::cout << "Default constructor for Animal" << std::endl;
	return ;
}

Animal::Animal( const Animal & value ) : _type( "alive" ) {
	std::cout << "Copy constructor for Animal" << std::endl;
	*this = value;
	return ;
}

Animal::~Animal( void ) {
	std::cout << "Default destructor for Animal" << std::endl;
	return ;
}

Animal &	Animal::operator=( const Animal & rhs ) {
	this->setType( rhs.getType() );
	return *this;
}

std::string	Animal::getType( void ) const {
	return this->_type;
}

void	Animal::setType( std::string type ) {
	this->_type = type;
	return ;
}

void	Animal::makeSound( void ) const {
	return ;
}
