/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:20:35 by fleitz            #+#    #+#             */
/*   Updated: 2022/12/08 10:22:38 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class	Animal	{
	public:
		Animal( void );
		Animal( const Animal & value );
		virtual ~Animal( void );

		Animal &		operator=( const Animal & rhs );

		std::string		getType( void ) const;
		void			setType( std::string type );
		virtual void	makeSound( void ) const;

	protected:
		std::string	_type;

};

#endif
