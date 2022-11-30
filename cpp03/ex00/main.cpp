#include "headers/ClapTrap.hpp"

int	main(void) {
	ClapTrap	clap( "Lilith" );
	clap.attack( "le Beau Jack" );
	std::cout << "hp point : " << clap.get_hp() << " mana points : " << clap.get_mana() << std::endl << std::endl;
	
	clap.takeDamage( 2 );
	std::cout << "hp point : " << clap.get_hp() << " mana points : " << clap.get_mana() << std::endl << std::endl;
	clap.takeDamage( 6 );
	
	int i = -1;
	while (++i <= 12) {
		std::cout << "hp point : " << clap.get_hp() << " mana points : " << clap.get_mana() << std::endl << std::endl;
		clap.beRepaired( 2 );
	}

	std::cout << "hp point : " << clap.get_hp() << " mana points : " << clap.get_mana() << std::endl << std::endl;
	clap.takeDamage( 20 );
	std::cout << "hp point : " << clap.get_hp() << " mana points : " << clap.get_mana() << std::endl << std::endl;
	clap.takeDamage( 10 );
	std::cout << "hp point : " << clap.get_hp() << " mana points : " << clap.get_mana() << std::endl << std::endl;

	return 0;
}