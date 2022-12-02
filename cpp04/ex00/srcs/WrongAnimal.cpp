#include "../headers/WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type( "alive" ) {
	std::cout << "Default constructor for WrongAnimal" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( const WrongAnimal & value ) : _type( "alive" ) {
	std::cout << "Copy constructor for WrongAnimal" << std::endl;
	*this = value;
	return ;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "Default destructor for WrongAnimal" << std::endl;
	return ;
}

WrongAnimal &	WrongAnimal::operator=( const WrongAnimal & rhs ) {
	this->setType( rhs.getType() );
	return *this;
}

std::string	WrongAnimal::getType( void ) const {
	return this->_type;
}

void	WrongAnimal::setType( std::string type ) {
	this->_type = type;
	return ;
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "Je suis un WrongAnimal" << std::endl;
	return ;
}
