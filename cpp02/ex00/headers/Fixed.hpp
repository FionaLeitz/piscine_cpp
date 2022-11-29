/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:48:12 by fleitz            #+#    #+#             */
/*   Updated: 2022/11/28 16:48:15 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed {

	public:
		Fixed( void );
		Fixed( const Fixed& value);
		~Fixed( void );

		Fixed &			operator=( const Fixed & rhs );

		int				getRawBits( void ) const ;
		void			setRawBits( const int raw );

	private:
		int					_RawBits;
		static const int	_bits;

};

#endif
