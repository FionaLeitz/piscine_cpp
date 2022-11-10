/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:35:26 by fleitz            #+#    #+#             */
/*   Updated: 2022/11/10 10:35:27 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) {
	std::cout << "Blaaaaaarh... A new zombie appeared !" << std::endl;
	return ;
}

Zombie::~Zombie( void ) {
	std::cout << "Oooorrrhh... " << this->_name << " is dead" << std::endl;
	return ;
}

void	Zombie::annonce( void ) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...";
	std::cout << std::endl;
	return ;
}

void	Zombie::set_name( std::string name ) {
	this->_name = name;
	return ;
}
