/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:10:45 by fleitz            #+#    #+#             */
/*   Updated: 2022/11/10 11:10:47 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanB {

	public:
		HumanB( std::string name );
		~HumanB( void );
		void		attack( void );
		void		setWeapon( Weapon& club );

	private:
		std::string	_name;
		Weapon		*_weapon;


};

#endif
