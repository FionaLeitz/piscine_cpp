/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:27:32 by fleitz            #+#    #+#             */
/*   Updated: 2022/12/08 10:27:33 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class	Dog : public AAnimal {
	public:
		Dog( void );
		Dog( const Dog & value );
		~Dog( void );

		virtual void	makeSound( void ) const;

		Brain *	getBrain( void ) const;
		void	setBrain( Brain * brain );
		
	private:
		Brain *	_brain;

};

#endif
