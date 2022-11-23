#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed {
	public:
		Fixed( void );										// constructeur par defaut
		Fixed( const Fixed& value);							// constructeur par copie
		Fixed( const int nbr );								// constructeur qui prend un const int
		Fixed( const float nbr );							// constructeur qui prend un float
		~Fixed( void );										// destructeur par defaut

		Fixed &				operator=( const Fixed & rhs );
		/*surcharge de l'operateur << ne sera pas present dans la classe*/
		float				toFloat( void ) const ;
		int					toInt( void ) const ;
		int					getRawBits( void ) const ;
		void				setRawBits( const int raw );

	private:
		int					_value;
		static const int	_bits;

};

#endif