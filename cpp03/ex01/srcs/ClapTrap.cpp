/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 09:34:03 by fleitz            #+#    #+#             */
/*   Updated: 2022/12/07 09:34:05 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name( "NoName" ), _hp(10), _mana(10), _damages(0) {
	std::cout << "Default construtor for ClapTrap " << this->get_name() << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hp(10), _mana(10), _damages(0) {
	std::cout << "Constructor with name for ClapTrap " << this->get_name() << std::endl;
	return;
}

ClapTrap::ClapTrap( const ClapTrap & value ) {
	std::cout << "Copy constructor for ClapTrap " << this->get_name() << std::endl;
	*this = value;
	return ;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "Default destructor for ClapTrap " << this->get_name() << std::endl;
	return ;
}

ClapTrap &	ClapTrap::operator=( const ClapTrap & rhs ) {
	this->set_name( rhs.get_name() );
	this->set_hp( rhs.get_hp() );
	this->set_mana( rhs.get_mana() );
	this->set_damages( rhs.get_damages() );
	return *this;
}

void	ClapTrap::attack( const std::string & target ) {
	if (this->get_mana() == 0)
	{
		std::cout << "ClapTrap " << this->get_name() << " does not have any mana, it can't attack."
		<< std::endl;
		return ;
	}
	if (this->get_hp() == 0)
	{
		std::cout << "ClapTrap " << this->get_name() << " is dead, it can't attack." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->get_name() << " attacks " << target
	<< ", causing " << this->get_damages() << " points of damage!" << std::endl;
	this->set_mana( this->get_mana() - 1 );
	return ;
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	if (this->get_hp() == 0)
	{
		std::cout << this->get_name() << " can't take damages, it's already dead!"
		<< std::endl;
		return ;
	}
	std::cout << this->get_name() << " takes " << amount << " damages..." << std::endl;
	if (this->get_hp() <= amount)
	{
		std::cout << "It was too much for " << this->get_name()
		<< ", it died." << std::endl;
		this->set_hp( 0 );
		return ;
	}
	this->set_hp( this->get_hp() - amount);
	return ;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if (this->get_mana() == 0)
	{
		std::cout << this->get_name() << " does not have any mana, it can't repaire itself."
		<< std::endl;
		return ;
	}
	if (this->get_hp() == 0)
	{
		std::cout << this->get_name() << " is dead, it can't repaire itself." << std::endl;
		return ;
	}
	std::cout << this->get_name() << " repaires itself and gains " << amount << " life points." << std::endl;
	this->set_mana( this->get_mana() - 1 );
	this->set_hp( this->get_hp() + amount );
	return ;
}

std::string	ClapTrap::get_name( void ) const {
	return this->_name;
}

void	ClapTrap::set_name( std::string name ) {
	this->_name = name;
	return;
}

unsigned int	ClapTrap::get_hp( void ) const {
	return this->_hp;
}

void	ClapTrap::set_hp( unsigned int hp ) {
	this->_hp = hp;
	return ;
}

unsigned int	ClapTrap::get_mana( void ) const {
	return this->_mana;
}

void	ClapTrap::set_mana( unsigned int mana ) {
	this->_mana = mana;
	return ;
}

unsigned int	ClapTrap::get_damages( void ) const {
	return this->_damages;
}

void	ClapTrap::set_damages( unsigned int damages ) {
	this->_damages = damages;
	return ;
}
