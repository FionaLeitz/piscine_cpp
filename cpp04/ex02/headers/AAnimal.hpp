/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:27:08 by fleitz            #+#    #+#             */
/*   Updated: 2022/12/08 10:27:10 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>
# include <iostream>

class	AAnimal	{
	public:
		AAnimal( void );
		AAnimal( const AAnimal & value );
		virtual ~AAnimal( void );

		AAnimal &		operator=( const AAnimal & rhs );

		std::string		getType( void ) const;
		void			setType( std::string type );
		virtual void	makeSound( void ) const = 0;

	protected:
		std::string	_type;

};

#endif
