#include "../headers/Character.hpp"

Character::Character( void ) : _name( "NoName" ) {
	std::cout << "Default constructor for Character" << std::endl;
	return ;
}

Character::Character( std::string const & name ) : name(name) {
	std::cout << "String constructor for Character" << std::endl;
	return ;
}

Character::Character( const Character & value ) {
	std::cout << "Copy constructor for Character" << std::endl;
	*this = value;
	return ;
}

Character::~Character( void ) {
	std::cout << "Default destructor for Character" << std::endl;
	return ;
}

Character &	Character::operator=( const Character & rhs ) {
	this->setName( rhs.getName() );
	return *this;
}

std::string const &	Character::getName( void ) {
	return this->_name;
}

void	Character::setName( std::string str ) {
	this->_name = str;
	return ;
}

void	Character::equip( AMateria * m ) {
	std::cout << "Fonction EQUIP de la class CHARACTER" << std::endl;
	return ;
}

void	Character::unequip( int idx ) {
	std::cout << "Fonction UNEQUIP de la class CHARACTER" << std::endl;
	return ;
}

void	Character::use( int idx, Character & target ) {
	std::cout << "Fonction USE de la class CHARACTER" << std::endl;
	return ;
}
