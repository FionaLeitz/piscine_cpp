/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:48:31 by fleitz            #+#    #+#             */
/*   Updated: 2022/11/28 16:48:33 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Fixed.hpp"

const int	Fixed::_bits = 8;

Fixed::Fixed( void ) : _RawBits(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const Fixed& value ) {
	std::cout << "Copy constructor called" << std::endl;
	// *this = value;
	this->setRawBits( value.getRawBits() );
	return ;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &	Fixed::operator=( Fixed const & rhs ) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits( rhs.getRawBits() );
	return *this;
}

int		Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_RawBits;
}

void	Fixed::setRawBits( int const raw ) {
	this->_RawBits = raw;
	return ;
}
