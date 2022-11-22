/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:25:01 by fleitz            #+#    #+#             */
/*   Updated: 2022/11/21 10:25:02 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/Harl.hpp"

int	main(int argc, char **argv)
{
	Harl		harl;

	if (argc != 2)
	{
		std::cout << "Is Harl Ok ?" << std::endl;
		return 1;
	}
	harl.complain(argv[1]);
	return 0;
}
