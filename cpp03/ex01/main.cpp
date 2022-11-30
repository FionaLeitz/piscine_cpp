#include "headers/ScavTrap.hpp"

int	main( void ) {
	{
		ScavTrap test;
		std::cout << test.get_name() << std::endl;
	}
	std::cout << std::endl;
	{
		ScavTrap test( "Name_test" );
		std::cout << test.get_name() << std::endl << std::endl;
		ScavTrap test2(test);
		std::cout << test2.get_name() << std::endl << std::endl;
		ScavTrap test3 = test;
		std::cout << test3.get_name() << std::endl << std::endl;

	}
	std::cout << std::endl;
	ScavTrap scav( "Mordecai" );
	scav.attack( "le Beau Jack" );
	std::cout << std::endl;

	scav.takeDamage(2);
	std::cout << scav.get_name() << " hp : " << scav.get_hp() << ", mana : " << scav.get_mana() << std::endl;
	scav.beRepaired(1);
	std::cout << scav.get_name() << " hp : " << scav.get_hp() << ", mana : " << scav.get_mana() << std::endl << std::endl;

	scav.guardGate();

	return 0;
}
