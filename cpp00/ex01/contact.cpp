#include <iostream>
#include <cstring>
#include "Contact.hpp"

Contact::Contact( void ) {
	std::cout << "Constructor for Contact called" << std::endl;
	return ;
}

Contact::~Contact( void ) {
	std::cout << "Destructor for Contact called" << std::endl;
	return ;
}

void	Contact::get_add( void ) {
	this->first_name.clear();
	std::cout << "First name : ";
	std::cin >> this->first_name;
	while (this->first_name.size() < 10)
		this->first_name+= " ";

	std::cout << "Last name : ";
	this->last_name.clear();
	std::cin >> this->last_name;
	while (this->last_name.size() < 10)
		this->last_name+= " ";

	std::cout << "Nickname : ";
	this->nickname.clear();
	std::cin >> this->nickname;
	while (this->nickname.size() < 10)
		this->nickname+= " ";

	std::cout << "Number : ";
	this->phone_nbr.clear();
	std::cin >> this->phone_nbr;
	while (this->phone_nbr.size() < 10)
		this->phone_nbr+= " ";

	std::cout << "Darkest secret : ";
	this->secret.clear();
	std::cin >> this->secret;
	while (this->secret.size() < 10)
		this->secret+= " ";
	return ;
}