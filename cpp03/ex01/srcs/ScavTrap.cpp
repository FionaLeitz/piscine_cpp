/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 09:34:11 by fleitz            #+#    #+#             */
/*   Updated: 2022/12/07 09:34:12 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap() {
	std::cout << "Default construtor for ScavTrap " << this->get_name() << std::endl;

	this->_hp = 100;
	this->_mana = 50;
	this->_damages = 20;
	return ;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
	std::cout << "Constructor with name for ScavTrap " << this->get_name() << std::endl;
	this->_hp = 100;
	this->_mana = 50;
	this->_damages = 20;
	return;
}

ScavTrap::ScavTrap( const ScavTrap & value ) {
	std::cout << "Copy constructor for ScavTrap " << this->get_name() << std::endl;
	*this = value;
	return ;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "Default destructor for ScavTrap " << this->get_name() << std::endl;
	return ;
}

void	ScavTrap::attack( const std::string & target ) {
	if (this->get_mana() == 0)
	{
		std::cout << "ScavTrap " << this->get_name() << " does not have any mana, it can't attack."
		<< std::endl;
		return ;
	}
	if (this->get_hp() == 0)
	{
		std::cout << "ScavTrap " << this->get_name() << " is dead, it can't attack." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->get_name() << " attacks " << target
	<< ", causing " << this->get_damages() << " points of damage!" << std::endl;
	this->set_mana( this->get_mana() - 1 );
	return ;
}

void	ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap " << this->get_name() << " entered Gate Keeper mode." << std::endl;
	this->set_mana( this->get_mana() - 1 );
	return ;
}
