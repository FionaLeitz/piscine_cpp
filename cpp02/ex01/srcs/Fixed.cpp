/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:49:11 by fleitz            #+#    #+#             */
/*   Updated: 2022/11/28 16:49:12 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Fixed.hpp"

const int	Fixed::_bits = 8;

Fixed::Fixed( void ) : _RawBits(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const Fixed& value) {
	std::cout << "Copy constructor called" << std::endl;
	*this = value;
	return ;
}

Fixed::Fixed( const int nbr ) : _RawBits(nbr << this->_bits) {
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const float nbr ) : _RawBits(roundf(nbr * (1 << this->_bits))) {
	std::cout << "Float constructor called" << std::endl;
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

float	Fixed::toFloat( void ) const {
	return (float)this->_RawBits / (float)(1 << this->_bits);
}

int	Fixed::toInt( void ) const {
	return (int)roundf(this->_RawBits >> this->_bits);
}

int		Fixed::getRawBits( void ) const {
	return this->_RawBits;
}

void	Fixed::setRawBits( int const raw ) {
	this->_RawBits = raw;
	return ;
}

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return o;
}
