#include "headers/FragTrap.hpp"

int	main( void ) {
	FragTrap	frag( "Zer0" );
	frag.attack( "le Beau Jack" );
	std::cout << std::endl;

	frag.takeDamage(2);
	std::cout << frag.get_name() << " hp : " << frag.get_hp() << ", mana : " << frag.get_mana() << std::endl;
	frag.beRepaired(1);
	std::cout << frag.get_name() << " hp : " << frag.get_hp() << ", mana : " << frag.get_mana() << std::endl << std::endl;

	frag.hightFivesGuys();

	return 0;
}
