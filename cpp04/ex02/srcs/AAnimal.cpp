/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:27:57 by fleitz            #+#    #+#             */
/*   Updated: 2022/12/08 10:27:59 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/AAnimal.hpp"

AAnimal::AAnimal( void ) : _type( "alive" ) {
	std::cout << "Default constructor for AAnimal" << std::endl;
	return ;
}

AAnimal::AAnimal( const AAnimal & value ) : _type( "alive" ) {
	std::cout << "Copy constructor for AAnimal" << std::endl;
	*this = value;
	return ;
}

AAnimal::~AAnimal( void ) {
	std::cout << "Default destructor for AAnimal" << std::endl;
	return ;
}

AAnimal &	AAnimal::operator=( const AAnimal & rhs ) {
	this->setType( rhs.getType() );
	return *this;
}

std::string	AAnimal::getType( void ) const {
	return this->_type;
}

void	AAnimal::setType( std::string type ) {
	this->_type = type;
	return ;
}

void	AAnimal::makeSound( void ) const {
	return ;
}
