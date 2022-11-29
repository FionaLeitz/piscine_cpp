/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:49:34 by fleitz            #+#    #+#             */
/*   Updated: 2022/11/28 16:49:36 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed {
	public:
		Fixed( void );										// constructeur par defaut
		Fixed( const Fixed& value);							// constructeur par copie
		Fixed( const int nbr );								// constructeur qui prend un int
		Fixed( const float nbr );							// constructeur qui prend un float
		~Fixed( void );										// destructeur par defaut

		Fixed &				operator=( const Fixed & rhs );
		float				toFloat( void ) const ;
		int					toInt( void ) const ;
		int					getRawBits( void ) const ;
		void				setRawBits( const int raw );

	private:
		int					_RawBits;
		static const int	_bits;

};

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs);

#endif
