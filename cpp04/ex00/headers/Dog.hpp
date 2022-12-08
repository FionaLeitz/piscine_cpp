/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:20:51 by fleitz            #+#    #+#             */
/*   Updated: 2022/12/08 10:23:01 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class	Dog : public Animal {
	public:
		Dog( void );
		Dog( const Dog & value );
		~Dog( void );

		virtual void	makeSound( void ) const;
		
	private:

};

#endif
