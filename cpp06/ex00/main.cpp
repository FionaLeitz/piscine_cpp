/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 09:41:56 by fleitz            #+#    #+#             */
/*   Updated: 2023/01/04 09:41:58 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "headers/Types.hpp"

int	main( int argc, char **argv ) {
	(void) argv;

	if (argc != 2)
	{
		std::cout << "Error" << std::endl << "Needing one argument and only one" << std::endl;
		return 1;
	}
	Types	nbr(argv[1]);
	if ( nbr.checkspec() )
		return 1;
	if ( !nbr.checknbr() ) {
		std::cout << "Invalid expression" << std::endl;
		return 1;
	}
	std::cout << nbr;
	return 0;
}
