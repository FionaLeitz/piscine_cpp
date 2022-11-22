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

#include "headers/Zombie.hpp"

int	main(void)
{
	std::cout << "=== Creation du zombie test :" << std::endl;
	Zombie	test( "Bob_test" );
	test.annonce();

	std::cout << std::endl << "=== Creation du zombie random (sans new) + fin de la fonction et suppression du zombie random" << std::endl;
	randomChump( "Randall_random" ) ;

	std::cout << std::endl << "=== Creation du zombie avec allocation de memoire" << std::endl;
	Zombie	*newz = newZombie( "Nelly_new" );
	
	std::cout << std::endl << "=== Delete du zombie avec allocation de memoire" << std::endl;
	delete newz;

	std::cout << std::endl << "=== Fin du programme, fin du zombie test" << std::endl;
	return 0;
}
