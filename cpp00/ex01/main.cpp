#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <cstring>


/*
Il manque :
	- faire un truc plus clean
	- mettre un maximum de truc en prive
*/


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
	std::cout << "See you soon" << std::endl;
	return 0;
}