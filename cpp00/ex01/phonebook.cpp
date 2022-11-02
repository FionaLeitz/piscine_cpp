/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:58:32 by fleitz            #+#    #+#             */
/*   Updated: 2022/11/02 14:58:35 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "Phonebook.hpp"

Phonebook::Phonebook( char p1, int p2, float p3 ) {
	std::cout << "Constructor for Phonebook called" << std::endl;

	this->a1 = p1;
	std::cout << "Phonebook: this->a1 = " << this->a1 << std::endl;

	this->a2 = p2;
	std::cout << "Phonebook: this->a2 = " << this->a2 << std::endl;

	this->a3 = p3;
	std::cout << "Phonebook: this->a3 = " << this->a3 << std::endl;

	return ;
}

Phonebook::~Phonebook( void )
{
	std::cout << "Destructor for Phonebook called" << std::endl;
	return ;
}
