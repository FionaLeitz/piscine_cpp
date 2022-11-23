#include "../headers/Fixed.hpp"

const int	Fixed::_bits = 8;

Fixed::Fixed( void ) {
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
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
	return this->_value;
}

void	Fixed::setRawBits( int const raw ) {
	this->_value = raw;
	return ;
}
