/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:57:54 by fleitz            #+#    #+#             */
/*   Updated: 2022/11/04 14:58:05 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "Contact.hpp"

Contact::Contact( void ) {
	// std::cout << "Constructor for Contact called" << std::endl;
	return ;
}

Contact::~Contact( void ) {
	// std::cout << "Destructor for Contact called" << std::endl;
	return ;
}

void	Contact::print( void ) {
	std::cout << "First name: " << this->first_name << std::endl;
	std::cout << "Last name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phone_nbr << std::endl;
	std::cout << "Darkest secret: " << this->secret << std::endl;
	return ;
}

void	Contact::_prompt_add( const char *str, int line ) {
	std::string	*place;

	std::cout << str;
	if (line == 1)
		place = &this->first_name;
	else if (line == 2)
		place = &this->last_name;
	else if (line == 3)
		place = &this->nickname;
	else if (line == 4)
		place = &this->phone_nbr;
	else if (line == 5)
		place = &this->secret;
	place->clear();
	std::getline(std::cin, *place);
	return ;
}

void	Contact::_resize( int size, int line ) {
	std::string	*place;

	if (line == 1)
		place = &this->first_name;
	else if (line == 2)
		place = &this->last_name;
	else if (line == 3)
		place = &this->nickname;
	this->show+= *place;
	if (this->show.size() >= size)
	{
		this->show.resize(size - 1);
		this->show[size - 2] = '.';
	}
	while (this->show.size() % 11 != 0)
		this->show+= " ";
		this->show+= "|";
	return ;
}

void	Contact::get_add( int count ) {

	this->_prompt_add( "First name : ", 1);
	this->_prompt_add( "Last name : ", 2);
	this->_prompt_add( "Nickname : ", 3);
	this->_prompt_add( "Number : ", 4);
	this->_prompt_add( "Darkest secret : ", 5);
	this->show.clear();
	this->show+= "|";
	this->show+= count + '1';
	this->show+= "         |";
	this->_resize( 23, 1 );
	this->_resize( 34, 2 );
	this->_resize( 45, 3 );
	return ;
}
