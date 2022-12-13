/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:28:21 by fleitz            #+#    #+#             */
/*   Updated: 2022/12/08 10:28:22 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Dog.hpp"

Dog::Dog( void ) {
	std::cout << "Default constructor for Dog" << std::endl;
	this->setType( "dog" );
	this->setBrain( new Brain() );
	return ;
}

Dog::Dog( const Dog & value ) {
	std::cout << "Copy constructor for Dog" << std::endl;
	this->setBrain( new Brain() );
	this->getBrain()[0] = value.getBrain()[0];
	this->setType( "dog" );
	return ;
}

Dog::~Dog( void ) {
	std::cout << "Default destructor for Dog" << std::endl;
	delete this->getBrain();
	return ;
}

Dog &	Dog::operator= ( const Dog & rhs ) {
	this->getBrain()[0] = rhs.getBrain()[0];
	this->setType( "dog" );
	return *this;
}

void	Dog::makeSound( void ) const {
	std::cout << "Woouaf !" << std::endl;
	return ;
}

Brain *	Dog::getBrain( void ) const {
	return this->_brain;
}

void	Dog::setBrain( Brain * brain) {
	this->_brain = brain;
	return ;
}
