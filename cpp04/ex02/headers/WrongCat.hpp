/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:27:52 by fleitz            #+#    #+#             */
/*   Updated: 2022/12/08 10:27:53 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal {
	public:
		WrongCat( void );
		WrongCat( const WrongCat & value ) ;
		~WrongCat( void );

		void	makeSound( void ) const;

	private:

};

#endif
