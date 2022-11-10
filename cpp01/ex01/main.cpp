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

#include "Zombie.hpp"

int	main(void)
{
	int	N = 3;
	int	count;

	Zombie	*horde = zombieHorde( N, "Bob" );
	for (count = 0; count < N; count++)
		horde[count].annonce();
	std::cout << "Au secours !" << std::endl;
	delete [] horde;
	return 0;
}
