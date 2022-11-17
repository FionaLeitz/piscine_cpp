/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:34:58 by fleitz            #+#    #+#             */
/*   Updated: 2022/11/10 10:35:00 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name(name) {
	std::cout << "Zombie " << this->_name;
	std::cout << " has been created" << std::endl;
	return ;
}

Zombie::~Zombie( void ) {
	std::cout << "Zombie " << this->_name;
	std::cout << " has been destroyed" << std::endl;
	return ;
}

void	Zombie::annonce( void ) const {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
