/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:51:11 by fleitz            #+#    #+#             */
/*   Updated: 2022/11/28 16:51:14 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed {
	public:
		Fixed( void );
		Fixed( const Fixed& value);
		Fixed( const int nbr );
		Fixed( const float nbr );
		~Fixed( void );

		Fixed &				operator=( const Fixed & rhs );

		bool				operator>( const Fixed & rhs );
		bool				operator<( const Fixed & rhs );
		bool				operator>=( const Fixed & rhs );
		bool				operator<=( const Fixed & rhs );
		bool				operator==( const Fixed & rhs );
		bool				operator!=( const Fixed & rhs );

		Fixed				operator+( const Fixed & rhs );
		Fixed				operator-( const Fixed & rhs );
		Fixed				operator*( const Fixed & rhs );
		Fixed				operator/( const Fixed & rhs );

		Fixed				operator++( int );
		Fixed				operator++( void );
		Fixed				operator--( int );
		Fixed				operator--( void );

		static Fixed &			min( Fixed & a, Fixed & b );
		static Fixed const &	min( const Fixed & a, const Fixed & b );
		static Fixed &			max( Fixed & a, Fixed & b );
		static Fixed const &	max( const Fixed & a, const Fixed & b );

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
