#include "../headers/Cat.hpp"

Cat::Cat( void ) {
	std::cout << "Default constructor for Cat" << std::endl;
	this->setType( "cat" );
	return ;
}

Cat::Cat( const Cat & value ) {
	std::cout << "Copy constructor for Cat" << std::endl;
	*this = value;
	return ;
}

Cat::~Cat( void ) {
	std::cout << "Default destructor for Cat" << std::endl;
	return ;
}

void	Cat::makeSound( void ) const {
	std::cout << "Miaou..." << std::endl;
	return ;
}
