/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 09:35:18 by fleitz            #+#    #+#             */
/*   Updated: 2022/12/07 09:35:21 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap() {
	std::cout << "Default construtor for FragTrap " << this->get_name() << std::endl;
	this->_hp = 100;
	this->_mana = 100;
	this->_damages = 30;
	return ;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
	std::cout << "Constructor with name for FragTrap " << this->get_name() << std::endl;
	this->_hp = 100;
	this->_mana = 100;
	this->_damages = 30;
	return;
}

FragTrap::FragTrap( const FragTrap & value ) {
	std::cout << "Copy constructor for FragTrap " << this->get_name() << std::endl;
	*this = value;
	return ;
}

FragTrap::~FragTrap( void ) {
	std::cout << "Default destructor for FragTrap " << this->get_name() << std::endl;
	return ;
}

void	FragTrap::hightFivesGuys( void ) {
	std::cout << "<" << this->get_name() << "> Can I have a hight fives ?!" << std::endl;
	this->set_mana( this->get_mana() - 1 );
	return ;
}
