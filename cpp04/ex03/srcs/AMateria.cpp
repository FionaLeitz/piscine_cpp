#include "../headers/AMateria.hpp"

AMateria::AMateria( void ) : _type( "Default" ) {
	std::cout << "Default constructor for AMateria" << std::endl;
	return ;
}

AMateria::AMateria( std::string const & type ) : _type(type) {
	std::cout << "String constructor for AMateria" << std::endl;
	return ;
}

AMateria::AMateria( const AMateria & value ) {
	std::cout << "Copy constructor for AMateria" << std::endl;
	*this = value;
	return ;
}

AMateria::~AMateria( void ) {
	std::cout << "Default destructor for AMateria" << std::endl;
	return ;
}

AMateria &	AMateria::operator=( const AMateria& rhs ) {
	this->setType( rhs.getType() );
	return *this;
}

std::string const &	AMateria::getType( void ) const {
	return this->_type;
}

void	AMateria::setType( std::string str ) {
	this->_type = str;
	return ;
}

// virtual void	use( ICharacter & target ) {
// 	std::cout << "Fonction USE de la class AMateria" << std::endl;
// 	return ;
// }
