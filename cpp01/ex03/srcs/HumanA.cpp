/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:10:11 by fleitz            #+#    #+#             */
/*   Updated: 2022/11/10 11:10:14 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& club ) : _name( name ), _weapon( club ) {
	return ;
}

HumanA::~HumanA( void ) {
	return ;
}

void	HumanA::attack( void ) const {
	std::cout << this->_name << " attacks with their ";
	std::cout << this->_weapon.getType();
	std::cout << std::endl;
	return ;
}
