#include "../headers/Fixed.hpp"

Fixed::Fixed( void ) : _value(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const Fixed& value) {
	std::cout << "Copy constructor called" << std::endl;
	*this = value;
	return ;
}

Fixed::Fixed( const int nbr ) {
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const float nbr ) {
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
	std::cout << "Function toFloat" << std::endl;
	/*************************************************/
	return 0;
}

int	Fixed::toInt( void ) const {
	std::cout << "Function toInt" << std::endl;
	/************************************************/
	return 0;
}

int		Fixed::getRawBits( void ) const {
	return this->_value;
}

void	Fixed::setRawBits( int const raw ) {
	this->_value = raw;
	return ;
}
