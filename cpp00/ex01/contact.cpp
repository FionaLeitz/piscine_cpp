#include <iostream>
#include <cstring>
#include "Contact.hpp"

Contact::Contact( char p1, int p2, float p3 ) : a1(p1), a2(p2), a3(p3) {
	std::cout << std::endl << "Constructor for Contact called" << std::endl;
	std::cout << "Contact: this->a1 = " << this->a1 << std::endl;
	std::cout << "Contact: this->a2 = " << this->a2 << std::endl;
	std::cout << "Contact: this->a3 = " << this->a3 << std::endl;
	return ;
}

Contact::~Contact( void ) {
	std::cout << "Destructor for Contact called" << std::endl;
	return ;
}
