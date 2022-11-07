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
	std::string	cmd;

	repertory.count = 0;
	while (cmd != "EXIT")
	{
		std::cout << "What would you like to do ?" << std::endl;
		std::cin >> cmd;
		if (cmd == "ADD")
		{
			repertory.book[count].get_add( count );
			count++;
			if (count >= 8)
				count = 0;
			if (repertory.count < 8)
				repertory.count++;
		}
		else if (cmd =="SEARCH")
			repertory.make_search();
		else if (cmd != "EXIT")
			std::cout << "This command does not exist" << std::endl;
	}
	std::cout << "See you soon !" << std::endl;
	return 0;
}
