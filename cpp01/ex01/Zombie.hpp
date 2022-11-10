/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:36:48 by fleitz            #+#    #+#             */
/*   Updated: 2022/11/10 10:36:50 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <cstring>
# include <iostream>

class Zombie {

	public:
		Zombie( void ) ;
		~Zombie( void ) ;
		void		annonce( void );
		void		set_name( std::string name );

	private:
		std::string	_name;

};

Zombie* zombieHorde( int N, std::string name );

#endif
