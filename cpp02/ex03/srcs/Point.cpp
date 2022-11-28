#include "../headers/Point.hpp"

std::ostream &	operator<<( std::ostream & o, Point const & rhs) {
	o << "x = " << rhs.getX() << " y = " << rhs.getY();
	return o;
}

Point::Point( void ) : _x( 0 ), _y( 0 ) {
	// std::cout << "Constructeur par defaut" << std::endl;
	return ;
}

Point::Point( const Point & value) : _x(value.getX()), _y(value.getY()) {
	// std::cout << "Constructeur par copie" << std::endl;
	return ;
}

Point::Point( const float x, const float y ) : _x(x), _y(y) {
	// std::cout << "Constructeur avec floats" << std::endl;
	return ;
}

Point::Point( const Fixed x, const Fixed y ) : _x(x), _y(y) {
	// std::cout << "Constructeur avec floats" << std::endl;
	return ;
}

Point::~Point( void ) {
	return ;
}

Point &	Point::operator=( Point const & rhs ) {
	// std::cout << "Copy assignment operator called" << std::endl;
	this->setX( rhs.getX() );
	this->setY( rhs.getY() );
	std::cout << "test : " << rhs.getX() << ", " << rhs.getY() << std::endl;
	std::cout << "test : " << this->getX() << ", " << this->getY() << std::endl;
	return *this;
}

Fixed	Point::getX( void ) const {
	return this->_x;
}

void	Point::setX( const Fixed & point ) {
	(Fixed)this->_x = point;
	return ;
}

Fixed	Point::getY( void ) const {
	return this->_y;
}

void	Point::setY( const Fixed & point ) {
	(Fixed)this->_y = point;
	return ;
}

// Fixed	Fixed::operator+( const Fixed & rhs ) {
// 	std::cout << "=== OPERATOR +" << std::endl;
// 	return this->toFloat() + rhs.toFloat();
// }

// Point	Point::operator-( const Point & rhs ) {
// 	Point	tmp((this->getX() - rhs.getX()), (this->getY() - rhs.getY()));
// 	return tmp;
// }