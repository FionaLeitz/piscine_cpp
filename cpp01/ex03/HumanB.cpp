/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:10:38 by fleitz            #+#    #+#             */
/*   Updated: 2022/11/10 11:10:40 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name( name ), _weapon( NULL ) {
	return ;
}

HumanB::~HumanB( void ) {
	return ;
}

void	HumanB::setWeapon( Weapon& club ) {
	this->_weapon = &club;
	return ;
}

void	HumanB::attack( void ) {
	if (this->_weapon == NULL)
	{
		std::cout << this->_name << " can't attack without a weapon..." << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks with their ";
	std::cout << this->_weapon->getType();
	std::cout << std::endl;
	return ;
}
