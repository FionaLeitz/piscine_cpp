/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:34:28 by fleitz            #+#    #+#             */
/*   Updated: 2022/11/10 10:34:34 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	test( "Bob" );
	randomChump( "Randall" ) ;
	Zombie	*newz = newZombie( "Nelly" );
	delete newz;
	return 0;
}
