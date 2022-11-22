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

	std::cout << "=== Assignation de string au pointeur et a la reference" << std::endl;
	std::cout << "L'adresse de la string :	" << &string << std::endl;
	std::cout << "L'adresse dans le pointeur :	" << stringPTR << std::endl;
	std::cout << "L'adresse de la reference : 	" << &stringREF << std::endl << std::endl;

	std::cout << "Dans la string : 		" << string << std::endl;
	std::cout << "Au bout du pointer :		" << *stringPTR << std::endl;
	std::cout << "Au bout de la reference :	" << stringREF << std::endl << std::endl;

//	Modifie la string directement
	std::cout << std::endl << "=== Modification en passant par la string" << std::endl;
	string = "BONJOUR ICI LE CERVEAU";

	std::cout << "L'adresse de la string :	" << &string << std::endl;
	std::cout << "L'adresse dans le pointeur :	" << stringPTR << std::endl;
	std::cout << "L'adresse de la reference : 	" << &stringREF << std::endl << std::endl;

	std::cout << "Dans la string : 		" << string << std::endl;
	std::cout << "Au bout du pointer :		" << *stringPTR << std::endl;
	std::cout << "Au bout de la reference :	" << stringREF << std::endl << std::endl;

//	Modifie ce qu'il y a au bout du pointeur
	std::cout << std::endl << "=== Modification en passant par le pointeur" << std::endl;
	*stringPTR = "SALUT C'EST MOI LE CERVEAU";

	std::cout << "L'adresse de la string :	" << &string << std::endl;
	std::cout << "L'adresse dans le pointeur :	" << stringPTR << std::endl;
	std::cout << "L'adresse de la reference : 	" << &stringREF << std::endl << std::endl;

	std::cout << "Dans la string : 		" << string << std::endl;
	std::cout << "Au bout du pointer :		" << *stringPTR << std::endl;
	std::cout << "Au bout de la reference :	" << stringREF << std::endl << std::endl;

//	Modifie ce qu'il y a a la reference
	std::cout << std::endl << "=== Modification en passant par la reference" << std::endl;
	stringREF = "OLA MANANT, LE CERVEAU S'ADRESSE A VOUS";

	std::cout << "L'adresse de la string :	" << &string << std::endl;
	std::cout << "L'adresse dans le pointeur :	" << stringPTR << std::endl;
	std::cout << "L'adresse de la reference : 	" << &stringREF << std::endl << std::endl;

	std::cout << "Dans la string : 		" << string << std::endl;
	std::cout << "Au bout du pointer :		" << *stringPTR << std::endl;
	std::cout << "Au bout de la reference :	" << stringREF << std::endl;
	return 0;
}
