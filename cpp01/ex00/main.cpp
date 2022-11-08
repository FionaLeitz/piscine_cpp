#include "Zombie.hpp"

int	main(void)
{
	Zombie	test( "Bob" );
	randomChump( "Randall" ) ;
	Zombie	*newz = newZombie( "Nelly" );
	delete newz;
	return 0;
}