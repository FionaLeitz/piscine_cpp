#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name(name) {
	std::cout << "Zombie " << this->_name;
	std::cout << " has been created" << std::endl;
	return ;
}

Zombie::~Zombie( void ) {
	std::cout << "Zombie " << this->_name;
	std::cout << " has been destroyed" << std::endl;
	return ;
}

void	Zombie::annonce( void ) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
