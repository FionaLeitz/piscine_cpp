/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:35:04 by fleitz            #+#    #+#             */
/*   Updated: 2022/11/10 10:35:05 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <cstring>
# include <iostream>

class Zombie {

	public:
		Zombie( std::string name ) ;
		~Zombie( void ) ;
		void		annonce( void );

	private:
		std::string	_name;

};

void	randomChump( std::string name );
Zombie	*newZombie( std::string name );

#endif
