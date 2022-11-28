#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point {
	public:
		Point( void );
		Point( const Point& value);
		Point( const float x, const float y);
		Point( const Fixed x, const Fixed y );
		~Point( void );

		Point &		operator=(const Point & rhs);
		// Point		operator-( const Point & rhs );

		Fixed	getX( void ) const ;
		void	setX( const Fixed & point );
		Fixed	getY( void ) const ;
		void	setY( const Fixed & point );

	private:
		const Fixed	_x;
		const Fixed	_y;

};

std::ostream &	operator<<( std::ostream & o, Point const & rhs);

#endif