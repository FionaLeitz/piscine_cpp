/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:27:46 by fleitz            #+#    #+#             */
/*   Updated: 2022/12/08 10:27:48 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class	WrongAnimal	{
	public:
		WrongAnimal( void );
		WrongAnimal( const WrongAnimal & value );
		virtual ~WrongAnimal( void );

		WrongAnimal &		operator=( const WrongAnimal & rhs );

		std::string		getType( void ) const;
		void			setType( std::string type );
		void			makeSound( void ) const;

	protected:
		std::string	_type;

};

#endif
