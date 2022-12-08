/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:21:30 by fleitz            #+#    #+#             */
/*   Updated: 2022/12/08 10:21:31 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Dog.hpp"

Dog::Dog( void ) {
	std::cout << "Default constructor for Dog" << std::endl;
	this->setType( "dog" );
	return ;
}

Dog::Dog( const Dog & value ) {
	std::cout << "Copy constructor for Dog" << std::endl;
	*this = value;
	return ;
}

Dog::~Dog( void ) {
	std::cout << "Default destructor for Dog" << std::endl;
	return ;
}
void	Dog::makeSound( void ) const {
	std::cout << "Woouaf !" << std::endl;
	return ;
}

