/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:51:43 by fleitz            #+#    #+#             */
/*   Updated: 2022/11/28 16:51:45 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Fixed.hpp"

const int	Fixed::_bits = 8;

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return o;
}

Fixed::Fixed( void ) : _RawBits(0) {
	// std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const Fixed& value) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = value;
	return ;
}

Fixed::Fixed( const int nbr ) : _RawBits(nbr << this->_bits) {
	// std::cout << "Int constructor called" << std::endl;
	// this->_RawBits = nbr << this->_bits;
	return ;
}

Fixed::Fixed( const float nbr ) : _RawBits(roundf(nbr * (1 << this->_bits))) {
	// std::cout << "Float constructor called" << std::endl;
	// this->_RawBits = roundf(nbr * (1 << this->_bits));
	return ;
}

Fixed::~Fixed( void ) {
	// std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &	Fixed::operator=( Fixed const & rhs ) {
	// std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits( rhs.getRawBits() );
	return *this;
}

float	Fixed::toFloat( void ) const {
	return (float)this->getRawBits() / (1 << this->_bits);
}

int	Fixed::toInt( void ) const {
	return (int)roundf(this->getRawBits() >> this->_bits);
}

int		Fixed::getRawBits( void ) const {
	return this->_RawBits;
}

void	Fixed::setRawBits( int const raw ) {
	this->_RawBits = raw;
	return ;
}

bool	Fixed::operator>( const Fixed & rhs ) {
	// std::cout << "=== OPERATOR >" << std::endl;
	if (this->getRawBits() > rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<( const Fixed & rhs ) {
	// std::cout << "=== OPERATOR <" << std::endl;
	if (this->getRawBits() < rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator>=( const Fixed & rhs ) {
	// std::cout << "=== OPERATOR >=" << std::endl;
	if (this->getRawBits() >= rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<=( const Fixed & rhs) {
	// std::cout << "=== OPERATOR <=" << std::endl;
	if (this->getRawBits() <= rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator==( const Fixed & rhs ) {
	// std::cout << "=== OPERATOR ==" << std::endl;
	if (this->getRawBits() == rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator!=( const Fixed & rhs ) {
	// std::cout << "=== OPERATOR !=" << std::endl;
	if (this->getRawBits() != rhs.getRawBits())
		return true;
	return false;
}

Fixed	Fixed::operator+( const Fixed & rhs ) {
	// std::cout << "=== OPERATOR +" << std::endl;
	return this->toFloat() + rhs.toFloat();
}

Fixed	Fixed::operator-( const Fixed & rhs ) {
	// std::cout << "=== OPERATOR -" << std::endl;
	return this->toFloat() - rhs.toFloat();
}

Fixed	Fixed::operator*( const Fixed & rhs ) {
	// std::cout << "=== OPERATOR *" << std::endl;
	return this->toFloat() * rhs.toFloat();
}

Fixed	Fixed::operator/( const Fixed & rhs ) {
	// std::cout << "=== OPERATOR /" << std::endl;
	return this->toFloat() / rhs.toFloat();
}

Fixed	Fixed::operator++( int ) {
	// std::cout << "=== OPERATOR a++" << std::endl;
	Fixed	tmp = *this;
	this->setRawBits(this->getRawBits() + 1);
	return tmp;
}

Fixed	Fixed::operator++( void ) {
	// std::cout << "=== OPERATOR ++a" << std::endl;
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}

Fixed	Fixed::operator--( int ) {
	// std::cout << "=== OPERATOR a--" << std::endl;
	Fixed	tmp = *this;
	this->setRawBits(this->getRawBits() - 1);
	return tmp;
}

Fixed	Fixed::operator--( void ) {
	// std::cout << "=== OPERATOR --a" << std::endl;
	this->setRawBits(this->getRawBits() - 1);
	return *this;
}

Fixed &	Fixed::min( Fixed & a, Fixed & b ) {
	if (a > b)
		return b;
	return a;
}

Fixed const &	Fixed::min( const Fixed & a, const Fixed & b ) {
	if (a.getRawBits() > b.getRawBits())
		return b;
	return a;
}

Fixed &	Fixed::max( Fixed & a, Fixed & b ) {
	if (a > b)
		return a;
	return b;
}

Fixed const &	Fixed::max( const Fixed & a, const Fixed & b ) {
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}
