#include "headers/ClapTrap.hpp"

int	main(void) {
	ClapTrap	clap( "Lilith" );
	clap.attack( "le Beau Jack" );
	std::cout << "hp point : " << clap.get_hp() << " mana points : " << clap.get_mana() << std::endl;
	clap.takeDamage( 2 );
	std::cout << "hp point : " << clap.get_hp() << " mana points : " << clap.get_mana() << std::endl;
	clap.takeDamage( 6 );
	std::cout << "hp point : " << clap.get_hp() << " mana points : " << clap.get_mana() << std::endl;
	clap.beRepaired( 2 );
	std::cout << "hp point : " << clap.get_hp() << " mana points : " << clap.get_mana() << std::endl;
	clap.beRepaired( 2 );
	std::cout << "hp point : " << clap.get_hp() << " mana points : " << clap.get_mana() << std::endl;
	clap.beRepaired( 2 );
	std::cout << "hp point : " << clap.get_hp() << " mana points : " << clap.get_mana() << std::endl;
	clap.beRepaired( 2 );
	std::cout << "hp point : " << clap.get_hp() << " mana points : " << clap.get_mana() << std::endl;
	clap.beRepaired( 2 );
	std::cout << "hp point : " << clap.get_hp() << " mana points : " << clap.get_mana() << std::endl;
	clap.beRepaired( 2 );
	std::cout << "hp point : " << clap.get_hp() << " mana points : " << clap.get_mana() << std::endl;
	clap.beRepaired( 2 );
	std::cout << "hp point : " << clap.get_hp() << " mana points : " << clap.get_mana() << std::endl;
	clap.beRepaired( 2 );
	std::cout << "hp point : " << clap.get_hp() << " mana points : " << clap.get_mana() << std::endl;
	clap.beRepaired( 2 );
	std::cout << "hp point : " << clap.get_hp() << " mana points : " << clap.get_mana() << std::endl;
	clap.beRepaired( 2 );
	std::cout << "hp point : " << clap.get_hp() << " mana points : " << clap.get_mana() << std::endl;
	clap.beRepaired( 2 );
	std::cout << "hp point : " << clap.get_hp() << " mana points : " << clap.get_mana() << std::endl;
	clap.beRepaired( 2 );
	std::cout << "hp point : " << clap.get_hp() << " mana points : " << clap.get_mana() << std::endl;
	clap.takeDamage( 10 );
	std::cout << "hp point : " << clap.get_hp() << " mana points : " << clap.get_mana() << std::endl;
	clap.takeDamage( 10 );
	std::cout << "hp point : " << clap.get_hp() << " mana points : " << clap.get_mana() << std::endl;

	return 0;
}