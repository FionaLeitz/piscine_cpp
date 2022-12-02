#include "../headers/WrongCat.hpp"

WrongCat::WrongCat( void ) {
	std::cout << "Default constructor for WrongCat" << std::endl;
	this->setType( "wrong cat" );
	return ;
}

WrongCat::WrongCat( const WrongCat & value ) {
	std::cout << "Copy constructor for WrongCat" << std::endl;
	*this = value;
	return ;
}

WrongCat::~WrongCat( void ) {
	std::cout << "Default destructor for WrongCat" << std::endl;
	return ;
}

void	WrongCat::makeSound( void ) const {
	std::cout << "Miaou..." << std::endl;
	return ;
}
