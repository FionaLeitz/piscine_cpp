#include "../headers/Dog.hpp"

Dog::Dog( void ) {
	std::cout << "Default constructor for Dog" << std::endl;
	this->setType( "dog" );
	this->setBrain( new Brain() );
	return ;
}

Dog::Dog( const Dog & value ) {
	std::cout << "Copy constructor for Dog" << std::endl;
	*this = value;
	return ;
}

Dog::~Dog( void ) {
	std::cout << "Default destructor for Dog" << std::endl;
	delete this->getBrain();
	return ;
}
void	Dog::makeSound( void ) const {
	std::cout << "Woouaf !" << std::endl;
	return ;
}

Brain *	Dog::getBrain( void ) const {
	return this->_brain;
}

void	Dog::setBrain( Brain * brain) {
	this->_brain = brain;
	return ;
}
