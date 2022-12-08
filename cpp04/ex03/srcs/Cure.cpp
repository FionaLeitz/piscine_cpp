#include "../headers/Cure.hpp"

Cure::Cure( void ) : AMateria( "cure" ) {
	std::cout << "Default constructor for Cure" << std::endl;
	return ;
}

Cure::Cure( const Cure & value ) {
	*this = value;
	return ;
}

Cure::~Cure( void ) {
	std::cout << "Default destructor for Cure" << std::endl;
	return ;
}

Cure *	Cure::clone( void ) const {
	std::cout << "Fonction CLONE de la class CURE" << std::endl;
	return new Cure(*this);
}
