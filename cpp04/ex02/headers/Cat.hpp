/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:27:25 by fleitz            #+#    #+#             */
/*   Updated: 2022/12/08 10:27:26 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class	Cat : public AAnimal {
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
