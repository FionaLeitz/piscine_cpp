/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:23:52 by fleitz            #+#    #+#             */
/*   Updated: 2022/12/08 10:23:54 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>
# include "Brain.hpp"

class	Animal	{
	public:
		Animal( void );
		Animal( const Animal & value );
		virtual ~Animal( void );

		Animal &		operator=( const Animal & rhs );

		std::string		getType( void ) const;
		void			setType( std::string type );
		// virtual Brain *	getBrain( void ) const = 0;
		virtual void	makeSound( void ) const;

	protected:
		std::string	_type;

};

#endif
