/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:24:06 by fleitz            #+#    #+#             */
/*   Updated: 2022/12/08 10:24:08 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal {
	public:
		Cat( void );
		Cat( const Cat & value ) ;
		~Cat( void );

		virtual void	makeSound( void ) const;

		Brain *	getBrain( void ) const;
		void	setBrain( Brain * brain );

	private:
		Brain *	_brain;

};

#endif
