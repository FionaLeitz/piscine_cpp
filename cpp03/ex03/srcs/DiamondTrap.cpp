#include "../headers/DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : _name( "NoName" ) {
	std::cout << "Default construtor for DiamondTrap " << DiamondTrap::get_name() << std::endl;
	this->ClapTrap::set_name( this->DiamondTrap::get_name() + "_clap_name" );
	return ;
}



DiamondTrap::~DiamondTrap( void ) {
	std::cout << "Default destructor for DiamondTrap " << this->get_name() << std::endl;
	return ;
}

void	DiamondTrap::whoAmI( void ) {
	std::cout << "DiamongTrap name : " << this->get_name() << std::endl;
	std::cout << "ClapTrap name : " << this->ClapTrap::get_name() << std::endl;

	std::cout << std::endl << this->get_hp() << std::endl;
	return ;
}
