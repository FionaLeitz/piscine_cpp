/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:10:31 by fleitz            #+#    #+#             */
/*   Updated: 2022/11/10 11:10:33 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanA {

	public:
		HumanA( std::string name, Weapon& club );
		~HumanA( void );
		void		attack( void ) const ;

	private:
		std::string	_name;
		Weapon		&_weapon;

};

#endif
