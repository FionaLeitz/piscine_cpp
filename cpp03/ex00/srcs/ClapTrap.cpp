#include "../headers/ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : _name(name), _hp(10), _mana(10), _damages(0) {
	std::cout << "Default constructor" << std::endl;
	return;
}

ClapTrap::ClapTrap( const ClapTrap & value ) {
	std::cout << "Copy constructor" << std::endl;
	*this = value;
	return ;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "Defaultdestructor" << std::endl;
	return ;
}

ClapTrap &	ClapTrap::operator=( const ClapTrap & rhs ) {
	this->set_name( rhs.get_name() );
	this->set_hp( rhs.get_hp() );
	this->set_mana( rhs.get_mana() );
	this->set_damages( rhs.get_mana() );
	return *this;
}

std::string	ClapTrap::get_name( void ) const {
	return this->_name;
}

void	ClapTrap::set_name( std::string name ) {
	this->_name = name;
	return;
}

unsigned int	ClapTrap::get_hp( void ) const {
	return this->_hp;
}

void	ClapTrap::set_hp( unsigned int hp ) {
	this->_hp = hp;
	return ;
}

unsigned int	ClapTrap::get_mana( void ) const {
	return this->_mana;
}

void	ClapTrap::set_mana( unsigned int mana ) {
	this->_mana = mana;
	return ;
}

unsigned int	ClapTrap::get_damages( void ) const {
	return this->_damages;
}

void	ClapTrap::set_damages( unsigned int damages ) {
	this->_damages = damages;
	return ;
}
