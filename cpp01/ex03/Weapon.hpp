/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:11:55 by fleitz            #+#    #+#             */
/*   Updated: 2022/11/10 11:11:57 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class	Weapon {

	public:
		Weapon( std::string club );
		~Weapon( void );
		std::string&	getType( void );
		void			setType( std::string newType );

	private:
		std::string		_type;

};

#endif
