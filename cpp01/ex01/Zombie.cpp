#include "Zombie.hpp"

Zombie::Zombie( void ) {
	return ;
}

Zombie::~Zombie( void ) {
	return ;
}

void	Zombie::annonce( void ) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...";
	std::cout << std::endl;
	return ;
}
