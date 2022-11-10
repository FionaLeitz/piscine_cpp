/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:36:59 by fleitz            #+#    #+#             */
/*   Updated: 2022/11/10 10:37:00 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <cstring>
# include <iostream>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "L'adresse de la string :	" << &string << std::endl;
	std::cout << "L'adresse dans le pointeur :	" << stringPTR << std::endl;
	std::cout << "L'adresse de la reference : 	" << &stringREF << std::endl << std::endl;

	std::cout << "Dans la string : 		" << string << std::endl;
	std::cout << "Au bout du pointer :		" << *stringPTR << std::endl;
	std::cout << "Au bout de la reference :	" << stringREF << std::endl << std::endl;

//	Modifie la string directement
	string = "BONJOUR ICI LE CERVEAU";

	std::cout << "L'adresse de la string :	" << &string << std::endl;
	std::cout << "L'adresse dans le pointeur :	" << stringPTR << std::endl;
	std::cout << "L'adresse de la reference : 	" << &stringREF << std::endl << std::endl;

	std::cout << "Dans la string : 		" << string << std::endl;
	std::cout << "Au bout du pointer :		" << *stringPTR << std::endl;
	std::cout << "Au bout de la reference :	" << stringREF << std::endl << std::endl;

//	Modifie ce qu'il y a au bout du pointeur
	*stringPTR = "SALUT C'EST MOI LE CERVEAU";

	std::cout << "L'adresse de la string :	" << &string << std::endl;
	std::cout << "L'adresse dans le pointeur :	" << stringPTR << std::endl;
	std::cout << "L'adresse de la reference : 	" << &stringREF << std::endl << std::endl;

	std::cout << "Dans la string : 		" << string << std::endl;
	std::cout << "Au bout du pointer :		" << *stringPTR << std::endl;
	std::cout << "Au bout de la reference :	" << stringREF << std::endl << std::endl;

//	Modifie ce qu'il y a a la referecnce
	stringREF = "OLA MANANT, LE CERVEAU S'ADRESSE A VOUS";

	std::cout << "L'adresse de la string :	" << &string << std::endl;
	std::cout << "L'adresse dans le pointeur :	" << stringPTR << std::endl;
	std::cout << "L'adresse de la reference : 	" << &stringREF << std::endl << std::endl;

	std::cout << "Dans la string : 		" << string << std::endl;
	std::cout << "Au bout du pointer :		" << *stringPTR << std::endl;
	std::cout << "Au bout de la reference :	" << stringREF << std::endl;
	return 0;
}
