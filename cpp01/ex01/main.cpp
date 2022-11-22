/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:35:15 by fleitz            #+#    #+#             */
/*   Updated: 2022/11/10 10:35:17 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/Zombie.hpp"

int	main(void)
{
	int	N = 3;
	int	count;

	std::cout << "=== Creation de " << N << " zombie dans la horde" << std::endl;
	Zombie	*horde = zombieHorde( N, "Bob" );

	std::cout << std::endl << "=== L'annonce de chaque zombie de la horde" << std::endl;
	for (count = 0; count < N; count++)
		horde[count].annonce();

	std::cout << std::endl << "=== Delete de la horde entiere en une fonction" << std::endl;
	delete [] horde;

	std::cout << std::endl << "=== Fin du programme" << std::endl;
	return 0;
}
