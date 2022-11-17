/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:11:50 by fleitz            #+#    #+#             */
/*   Updated: 2022/11/10 11:11:51 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string club ) : _type(club) {
	return ;
}

Weapon::~Weapon( void ) {
	return ;
}

const std::string& Weapon::getType( void ) const {
	return this->_type;
}

void		Weapon::setType( std::string club ) {
	this->_type = club;
	return ;
}
