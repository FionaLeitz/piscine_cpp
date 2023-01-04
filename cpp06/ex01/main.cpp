/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 09:42:24 by fleitz            #+#    #+#             */
/*   Updated: 2023/01/04 09:42:26 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/main.hpp"

uintptr_t	serialize( t_data * ptr ) {
	return reinterpret_cast<uintptr_t>(ptr);
}

t_data * deserialize( uintptr_t raw ) {
	return reinterpret_cast<t_data*>(raw);
}

int	main( void ) {
	t_data	data1;
	uintptr_t	tmp;
	t_data	*data2;

	data1.str = "Bonjour";
	data1.nbr = 42;
	data1.c = 'F';
	tmp = serialize( &data1 );
	data2 = deserialize( tmp );
	std::cout << "adresse de base : " << &data1 << std::endl;
	std::cout << "adresse apres :   " << data2 << std::endl;
	std::cout << "Dans data1 : " << data1.str << ", " << data1.nbr << ", " << data1.c << std::endl;
	std::cout << "Dans data2 : " << data2->str << ", "<< data2->nbr << ", "<< data2->c << std::endl;
	
	data1.nbr++;
	std::cout << "data1 modifie : " << data1.nbr << std::endl;
	data2->nbr++;
	std::cout << "data2 modifie : " << data2->nbr << std::endl;
	
	return 0;
}
