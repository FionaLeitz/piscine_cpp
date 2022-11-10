/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:36:42 by fleitz            #+#    #+#             */
/*   Updated: 2022/11/10 10:36:44 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	int	count;
	Zombie	*horde = new Zombie[N];
	for (count = 0; count < N; count++)
		horde[count].setname( name );
	return horde;
}
