/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:24:53 by fleitz            #+#    #+#             */
/*   Updated: 2022/11/21 10:24:55 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

class	Harl {

	public:
		Harl( void );
		~Harl( void );
		void	complain( std::string level );

	private:
		void	_debug( void ) const ;
		void	_info( void ) const ;
		void	_warning( void ) const ;
		void	_error( void ) const ;

};

#endif
