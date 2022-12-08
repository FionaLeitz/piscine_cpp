/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:28:03 by fleitz            #+#    #+#             */
/*   Updated: 2022/12/08 10:28:05 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Brain.hpp"

Brain::Brain( void ) : _ideaN( -1 ) {
	std::cout << "Default constructor for Brain" << std::endl;
	return ;
}

Brain::Brain( const Brain & value ) {
	std::cout << "Copy constructor for Brain" << std::endl;
	*this = value;
	return ;
}

Brain::~Brain( void ) {
	std::cout << "Default destructor for Brain" << std::endl;
	return ;
}

Brain &	Brain::operator=( const Brain & rhs ) {
	for ( int i = -1; i < 100; ++i )
		this->ideas[i] = rhs.ideas[0];
	this->setIdeaN( rhs.getIdeaN() );
	return *this;
}

void	Brain::newIdea( std::string str ) {
	if (this->getIdeaN() > 99)
	{
		std::cout << "Brain is full..." << std::endl;
		return ;
	}
	this->setIdeaN( getIdeaN() + 1);
	this->ideas[this->getIdeaN()] = str;
	return ;
}

void	Brain::seeIdea( int nbr ) const {
	if ( nbr < 0 )
		std::cout << "Brain is not THAT stupid !" << std::endl;
	else if ( nbr > this->getIdeaN() )
		std::cout << "Brain does not think of that many things." << std::endl;
	else
		std::cout << this->ideas[nbr] << std::endl;
	return ;
}

void	Brain::forgetIdea( int nbr ) {
	if ( nbr < 0 )
		std::cout << "Brain is not THAT stupid !" << std::endl;
	else if (nbr > 99)
		std::cout << "Brain is not THAT big !" << std::endl;
	else
	{
		this->setIdeaN( this->getIdeaN() - 1 );
		while (nbr < 99)
		{
			this->ideas[nbr] = this->ideas[nbr + 1];
			nbr++;
		}
	}
}

int	Brain::getIdeaN( void ) const {
	return _ideaN;
}

void	Brain::setIdeaN( int newN ) {
	_ideaN = newN;
	return ;
}
