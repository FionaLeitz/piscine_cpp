/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:25:42 by fleitz            #+#    #+#             */
/*   Updated: 2022/11/21 10:25:43 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Harl.hpp"

Harl::Harl( void ) {
	return ;
}

Harl::~Harl( void ) {
	return ;
}

void	Harl::complain( std::string level ) const {
	std::string	tab[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	int	i;

	for (i = 0; tab[i] != level; i++)
		;
	switch ( i )
	{
			case 0:
				this->_debug();
			case 1:
				this->_info();
			case 2:
				this->_warning();
			case 3:
			{
				this->_error();
				break ;
			}
			default:
			{
				std::cout << "===== WRONG LEVEL =====" << std::endl;
				std::cout << "Harl is too enraged to speak properly." << std::endl;
			}
	}
	return ;
}

void	Harl::_debug( void ) const {
	std::cout << "===== LEVEL DEBUG =====" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese";
	std::cout << "-triple-pickle-special-ketchup burger. I really do !";
	std::cout << std::endl << std::endl;
	return ;
}

void	Harl::_info( void ) const {
	std::cout << "===== LEVEL INFO =====" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn't putenough bacon in my burger !";
	std::cout << " If you did, I wouldn't be asking for more !";
	std::cout << std::endl << std::endl;
	return ;
}

void	Harl::_warning( void ) const {
	std::cout << "===== LEVEL WARNING =====" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I've been coming for years ";
	std::cout << "whereas you started working here since last month.";
	std::cout << std::endl << std::endl;
	return ;
}

void	Harl::_error( void ) const {
	std::cout << "===== LEVEL ERROR =====" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now.";
	std::cout << std::endl;
	return ;
}
