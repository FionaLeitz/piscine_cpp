#include "../headers/Ice.hpp"

Ice::Ice( void ) : AMateria( "ice" ) {
	std::cout << "Default constructor for Ice" << std::endl;
	return ;
}

Ice::Ice( const Ice & value ) {
	*this = value;
	return ;
}

Ice::~Ice( void ) {
	std::cout << "Default destructor for Ice" << std::endl;
	return ;
}

Ice *	Ice::clone( void ) const {
	std::cout << "Fonction CLONE de la class ICE" << std::endl;
	return new Ice(*this);
}
