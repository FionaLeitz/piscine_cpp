/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:21:55 by fleitz            #+#    #+#             */
/*   Updated: 2022/12/08 10:21:57 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/WrongCat.hpp"

WrongCat::WrongCat( void ) {
	std::cout << "Default constructor for WrongCat" << std::endl;
	this->setType( "wrong cat" );
	return ;
}

WrongCat::WrongCat( const WrongCat & value ) {
	std::cout << "Copy constructor for WrongCat" << std::endl;
	*this = value;
	return ;
}

WrongCat::~WrongCat( void ) {
	std::cout << "Default destructor for WrongCat" << std::endl;
	return ;
}

void	WrongCat::makeSound( void ) const {
	std::cout << "Miaou..." << std::endl;
	return ;
}
