/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:21:22 by fleitz            #+#    #+#             */
/*   Updated: 2022/12/08 10:21:23 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Cat.hpp"

Cat::Cat( void ) {
	std::cout << "Default constructor for Cat" << std::endl;
	this->setType( "cat" );
	return ;
}

Cat::Cat( const Cat & value ) {
	std::cout << "Copy constructor for Cat" << std::endl;
	*this = value;
	return ;
}

Cat::~Cat( void ) {
	std::cout << "Default destructor for Cat" << std::endl;
	return ;
}

void	Cat::makeSound( void ) const {
	std::cout << "Miaou..." << std::endl;
	return ;
}
