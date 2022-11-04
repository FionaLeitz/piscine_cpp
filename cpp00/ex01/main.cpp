/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:58:17 by fleitz            #+#    #+#             */
/*   Updated: 2022/11/04 14:58:19 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <cstring>

int	main( void ) {
	Phonebook	repertory;
	int			count = 0;
	char		cmd[7] = "\0";

	repertory.count = 0;
	while (std::strcmp(cmd, "EXIT") != 0)
	{
		std::cout << "What would you like to do ?" << std::endl;
		std::cin >> cmd;
		if (std::strcmp(cmd, "ADD") == 0)
		{
			repertory.book[count].get_add( count );
			count++;
			if (count >= 8)
				count = 0;
			if (repertory.count < 8)
				repertory.count++;
		}
		else if (std::strcmp(cmd, "SEARCH") == 0)
			repertory.make_search();
		else if (std::strcmp(cmd, "EXIT") != 0)
			std::cout << "This command does not exist" << std::endl;
	}
	std::cout << "See you soon !" << std::endl;
	return 0;
}
