/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:25:08 by fleitz            #+#    #+#             */
/*   Updated: 2022/12/08 10:25:10 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Cat.hpp"

Cat::Cat( void ) {
	std::cout << "Default constructor for Cat" << std::endl;
	this->setType( "cat" );
	this->setBrain( new Brain() );
	return ;
}

Cat::Cat( const Cat & value ) {
	std::cout << "Copy constructor for Cat" << std::endl;
	*this = value;
	return ;
}

Cat::~Cat( void ) {
	std::cout << "Default destructor for Cat" << std::endl;
	delete this->getBrain();
	return ;
}

void	Cat::makeSound( void ) const {
	std::cout << "Miaou..." << std::endl;
	return ;
}

Brain *	Cat::getBrain( void ) const {
	return this->_brain;
}

void	Cat::setBrain( Brain * brain) {
	this->_brain = brain;
	return ;
}
