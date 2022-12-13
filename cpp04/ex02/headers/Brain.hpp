/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:27:14 by fleitz            #+#    #+#             */
/*   Updated: 2022/12/08 10:27:16 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class	Brain {
	public:
		Brain( void );
		Brain( const Brain & value );
		~Brain( void );

		Brain &			operator=( const Brain & rhs );

		void			newIdea( std::string str );
		void			seeIdea( int nbr ) const;
		void			forgetIdea( int nbr );
		
		int				getIdeaN( void ) const;
		void			setIdeaN( int newN );


	private:
		int				_ideaN;
		std::string		_ideas[100];
};

#endif
